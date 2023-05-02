#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref/pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref = new TCanvas("pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref", "pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref",0,0,600,600);
   pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref->Range(-100,-0.6384241,566.6667,2.735517);
   pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref->SetFillColor(0);
   pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref->SetBorderMode(0);
   pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref->SetBorderSize(2);
   pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref->SetLogy();
   pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref->SetLeftMargin(0.15);
   pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV4_ideal_pt_jet1_ref__33 = new TH1D("_QuadJet_noTagV4_ideal_pt_jet1_ref__33","",50,0,500);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(10,68);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(11,132);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(12,123);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(13,110);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(14,102);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(15,65);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(16,74);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(17,69);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(18,56);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(19,54);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(20,34);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(21,32);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(22,25);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(23,28);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(24,18);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(25,18);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(26,12);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(27,6);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(28,15);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(29,10);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(30,8);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(31,15);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(32,7);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(33,6);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(34,6);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(35,2);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(36,8);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(37,3);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(38,2);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(39,1);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(40,1);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(41,1);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(42,1);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(45,2);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(47,4);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(48,3);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(50,1);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetBinContent(51,3);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetEntries(1125);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV4_ideal_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1125   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  163.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  66.52");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV4_ideal_pt_jet1_ref__33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->SetLineColor(ci);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->GetXaxis()->SetRange(1,50);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->GetYaxis()->SetTitle("Events");
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV4_ideal_pt_jet1_ref__33->Draw("HIST");
   pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref->Modified();
   pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref->cd();
   pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref->SetSelected(pt_jet1_2018_QuadJet_noTagV4_18_ideal_ref);
}
