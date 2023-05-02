#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_noTagV5_18_ideal()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_noTagV5_18_ideal/pt_jet3_2018_QuadJet_noTagV5_18_ideal
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_noTagV5_18_ideal = new TCanvas("pt_jet3_2018_QuadJet_noTagV5_18_ideal", "pt_jet3_2018_QuadJet_noTagV5_18_ideal",0,0,600,600);
   pt_jet3_2018_QuadJet_noTagV5_18_ideal->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_noTagV5_18_ideal->Range(-109.1764,-0.003939963,585.8166,0.02889306);
   pt_jet3_2018_QuadJet_noTagV5_18_ideal->SetFillColor(0);
   pt_jet3_2018_QuadJet_noTagV5_18_ideal->SetFillStyle(4000);
   pt_jet3_2018_QuadJet_noTagV5_18_ideal->SetBorderMode(0);
   pt_jet3_2018_QuadJet_noTagV5_18_ideal->SetBorderSize(2);
   pt_jet3_2018_QuadJet_noTagV5_18_ideal->SetLeftMargin(0.15709);
   pt_jet3_2018_QuadJet_noTagV5_18_ideal->SetRightMargin(0.1234783);
   pt_jet3_2018_QuadJet_noTagV5_18_ideal->SetBottomMargin(0.12);
   pt_jet3_2018_QuadJet_noTagV5_18_ideal->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_noTagV5_18_ideal->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_noTagV5_18_ideal->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_noTagV5_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV5_ideal_pt_jet3__70 = new TH1D("_QuadJet_noTagV5_ideal_pt_jet3__70","",50,0,500);
   _QuadJet_noTagV5_ideal_pt_jet3__70->SetBinContent(9,0.006134969);
   _QuadJet_noTagV5_ideal_pt_jet3__70->SetBinContent(13,0.02439024);
   _QuadJet_noTagV5_ideal_pt_jet3__70->SetEntries(0.03052521);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV5_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =    117");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  16.03");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV5_ideal_pt_jet3__70->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV5_ideal_pt_jet3__70);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTagV5_ideal_pt_jet3__70->SetLineColor(ci);
   _QuadJet_noTagV5_ideal_pt_jet3__70->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTagV5_ideal_pt_jet3__70->GetXaxis()->SetRange(1,500);
   _QuadJet_noTagV5_ideal_pt_jet3__70->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV5_ideal_pt_jet3__70->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV5_ideal_pt_jet3__70->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV5_ideal_pt_jet3__70->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTagV5_ideal_pt_jet3__70->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV5_ideal_pt_jet3__70->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV5_ideal_pt_jet3__70->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV5_ideal_pt_jet3__70->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV5_ideal_pt_jet3__70->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV5_ideal_pt_jet3__70->Draw("HIST");
   pt_jet3_2018_QuadJet_noTagV5_18_ideal->Modified();
   pt_jet3_2018_QuadJet_noTagV5_18_ideal->cd();
   pt_jet3_2018_QuadJet_noTagV5_18_ideal->SetSelected(pt_jet3_2018_QuadJet_noTagV5_18_ideal);
}
