#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_noTagV2_18_ideal_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_noTagV2_18_ideal/pt_jet2_2018_QuadJet_noTagV2_18_ideal
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_noTagV2_18_ideal = new TCanvas("pt_jet2_2018_QuadJet_noTagV2_18_ideal", "pt_jet2_2018_QuadJet_noTagV2_18_ideal",0,0,600,600);
   pt_jet2_2018_QuadJet_noTagV2_18_ideal->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_noTagV2_18_ideal->Range(-100,-0.4109811,566.6667,0.68853);
   pt_jet2_2018_QuadJet_noTagV2_18_ideal->SetFillColor(0);
   pt_jet2_2018_QuadJet_noTagV2_18_ideal->SetBorderMode(0);
   pt_jet2_2018_QuadJet_noTagV2_18_ideal->SetBorderSize(2);
   pt_jet2_2018_QuadJet_noTagV2_18_ideal->SetLogy();
   pt_jet2_2018_QuadJet_noTagV2_18_ideal->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_noTagV2_18_ideal->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_noTagV2_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV2_ideal_pt_jet2__44 = new TH1D("_QuadJet_noTagV2_ideal_pt_jet2__44","",50,0,500);
   _QuadJet_noTagV2_ideal_pt_jet2__44->SetBinContent(9,1);
   _QuadJet_noTagV2_ideal_pt_jet2__44->SetBinContent(10,2);
   _QuadJet_noTagV2_ideal_pt_jet2__44->SetBinContent(12,1);
   _QuadJet_noTagV2_ideal_pt_jet2__44->SetEntries(4);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV2_ideal_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4      ");
   ptstats_LaTex = ptstats->AddText("Mean  =    101");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  11.28");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV2_ideal_pt_jet2__44->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV2_ideal_pt_jet2__44);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTagV2_ideal_pt_jet2__44->SetLineColor(ci);
   _QuadJet_noTagV2_ideal_pt_jet2__44->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTagV2_ideal_pt_jet2__44->GetXaxis()->SetRange(1,50);
   _QuadJet_noTagV2_ideal_pt_jet2__44->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_pt_jet2__44->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV2_ideal_pt_jet2__44->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_pt_jet2__44->GetYaxis()->SetTitle("Events");
   _QuadJet_noTagV2_ideal_pt_jet2__44->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_pt_jet2__44->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_pt_jet2__44->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_pt_jet2__44->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV2_ideal_pt_jet2__44->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_pt_jet2__44->Draw("HIST");
   pt_jet2_2018_QuadJet_noTagV2_18_ideal->Modified();
   pt_jet2_2018_QuadJet_noTagV2_18_ideal->cd();
   pt_jet2_2018_QuadJet_noTagV2_18_ideal->SetSelected(pt_jet2_2018_QuadJet_noTagV2_18_ideal);
}
