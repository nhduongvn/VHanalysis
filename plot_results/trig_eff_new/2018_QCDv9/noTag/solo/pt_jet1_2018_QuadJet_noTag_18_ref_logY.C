#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_noTag_18_ref/pt_jet1_2018_QuadJet_noTag_18_ref
//=========  (Tue Apr 25 23:01:40 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_noTag_18_ref = new TCanvas("pt_jet1_2018_QuadJet_noTag_18_ref", "pt_jet1_2018_QuadJet_noTag_18_ref",0,0,600,600);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_noTag_18_ref->Range(-100,1.637341,566.6667,5.756114);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetLogy();
   pt_jet1_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet1_ref__12 = new TH1D("_QuadJet_noTag_pt_jet1_ref__12","",50,0,500);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(5,3430);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(6,52775);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(7,101828);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(8,116597);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(9,110461);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(10,95817);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(11,80195);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(12,66048);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(13,53050);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(14,43137);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(15,34960);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(16,28630);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(17,22907);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(18,19107);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(19,15735);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(20,12745);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(21,10662);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(22,8849);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(23,7363);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(24,6204);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(25,5228);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(26,4391);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(27,3773);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(28,3244);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(29,2718);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(30,2292);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(31,1981);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(32,1739);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(33,1605);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(34,1313);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(35,1164);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(36,1024);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(37,995);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(38,809);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(39,745);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(40,640);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(41,560);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(42,532);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(43,455);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(44,392);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(45,408);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(46,342);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(47,292);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(48,277);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(49,262);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(50,224);
   _QuadJet_noTag_pt_jet1_ref__12->SetBinContent(51,2482);
   _QuadJet_noTag_pt_jet1_ref__12->SetEntries(930387);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 930387 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  114.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  57.21");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet1_ref__12->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet1_ref__12);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet1_ref__12->SetLineColor(ci);
   _QuadJet_noTag_pt_jet1_ref__12->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet1_ref__12->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet1_ref__12->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1_ref__12->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet1_ref__12->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1_ref__12->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet1_ref__12->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1_ref__12->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1_ref__12->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet1_ref__12->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet1_ref__12->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet1_ref__12->Draw("HIST");
   pt_jet1_2018_QuadJet_noTag_18_ref->Modified();
   pt_jet1_2018_QuadJet_noTag_18_ref->cd();
   pt_jet1_2018_QuadJet_noTag_18_ref->SetSelected(pt_jet1_2018_QuadJet_noTag_18_ref);
}
