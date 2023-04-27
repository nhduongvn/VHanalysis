#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_noTag_18_ideal()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_noTag_18_ideal/pt_jet3_2018_QuadJet_noTag_18_ideal
//=========  (Thu Apr 27 10:18:11 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_noTag_18_ideal = new TCanvas("pt_jet3_2018_QuadJet_noTag_18_ideal", "pt_jet3_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_noTag_18_ideal->Range(-109.1764,-0.01468531,585.8166,0.1076923);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetFillStyle(4000);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15709);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetRightMargin(0.1234783);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetBottomMargin(0.12);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet3__130 = new TH1D("_QuadJet_noTag_ideal_pt_jet3__130","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(5,0.003099666);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(6,0.004720098);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(7,0.006179651);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(8,0.007320178);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(9,0.006092917);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(10,0.006464646);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(11,0.008084577);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(12,0.006856024);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(13,0.005797101);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(14,0.01515152);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(15,0.01067616);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(16,0.008928571);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(17,0.007692308);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(18,0.01075269);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(20,0.03773585);
   _QuadJet_noTag_ideal_pt_jet3__130->SetBinContent(26,0.09090909);
   _QuadJet_noTag_ideal_pt_jet3__130->SetEntries(0.236461);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =    184");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  66.76");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet3__130->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet3__130);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_pt_jet3__130->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet3__130->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet3__130->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_ideal_pt_jet3__130->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet3__130->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet3__130->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet3__130->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_pt_jet3__130->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet3__130->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet3__130->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet3__130->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet3__130->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet3__130->Draw("HIST");
   pt_jet3_2018_QuadJet_noTag_18_ideal->Modified();
   pt_jet3_2018_QuadJet_noTag_18_ideal->cd();
   pt_jet3_2018_QuadJet_noTag_18_ideal->SetSelected(pt_jet3_2018_QuadJet_noTag_18_ideal);
}
