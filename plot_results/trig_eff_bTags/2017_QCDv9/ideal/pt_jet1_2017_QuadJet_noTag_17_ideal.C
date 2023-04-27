#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_noTag_17_ideal()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_noTag_17_ideal/pt_jet1_2017_QuadJet_noTag_17_ideal
//=========  (Thu Apr 27 10:19:54 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_noTag_17_ideal = new TCanvas("pt_jet1_2017_QuadJet_noTag_17_ideal", "pt_jet1_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_noTag_17_ideal->Range(-109.1764,-0.05384615,585.8166,0.3948718);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetFillStyle(4000);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15709);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetRightMargin(0.1234783);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetBottomMargin(0.12);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet1__118 = new TH1D("_QuadJet_noTag_ideal_pt_jet1__118","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(10,0.0173913);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(11,0.009009009);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(13,0.01769912);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(14,0.03076923);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(15,0.03389831);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(29,0.1666667);
   _QuadJet_noTag_ideal_pt_jet1__118->SetBinContent(34,0.3333333);
   _QuadJet_noTag_ideal_pt_jet1__118->SetEntries(0.608767);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  284.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   76.5");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet1__118->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet1__118);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_pt_jet1__118->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet1__118->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet1__118->GetXaxis()->SetRange(1,500);
   _QuadJet_noTag_ideal_pt_jet1__118->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1__118->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet1__118->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1__118->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_pt_jet1__118->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1__118->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1__118->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1__118->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet1__118->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1__118->Draw("HIST");
   pt_jet1_2017_QuadJet_noTag_17_ideal->Modified();
   pt_jet1_2017_QuadJet_noTag_17_ideal->cd();
   pt_jet1_2017_QuadJet_noTag_17_ideal->SetSelected(pt_jet1_2017_QuadJet_noTag_17_ideal);
}
