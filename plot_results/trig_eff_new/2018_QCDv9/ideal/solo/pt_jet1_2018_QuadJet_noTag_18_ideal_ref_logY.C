#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_noTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_noTag_18_ideal_ref/pt_jet1_2018_QuadJet_noTag_18_ideal_ref
//=========  (Tue Apr 25 23:01:41 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_noTag_18_ideal_ref = new TCanvas("pt_jet1_2018_QuadJet_noTag_18_ideal_ref", "pt_jet1_2018_QuadJet_noTag_18_ideal_ref",0,0,600,600);
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->Range(-100,0.22811,566.6667,4.479135);
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->SetFillColor(0);
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->SetBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->SetBorderSize(2);
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->SetLogy();
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->SetLeftMargin(0.15);
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet1_ref__120 = new TH1D("_QuadJet_noTag_ideal_pt_jet1_ref__120","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(7,3592);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(8,5775);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(9,5977);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(10,5408);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(11,4753);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(12,4118);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(13,3280);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(14,2830);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(15,2269);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(16,1930);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(17,1582);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(18,1369);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(19,1073);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(20,875);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(21,764);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(22,598);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(23,533);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(24,415);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(25,323);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(26,291);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(27,277);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(28,227);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(29,187);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(30,144);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(31,125);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(32,100);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(33,94);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(34,76);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(35,78);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(36,70);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(37,47);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(38,57);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(39,42);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(40,34);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(41,41);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(42,26);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(43,23);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(44,22);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(45,25);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(46,26);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(47,17);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(48,9);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(49,13);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(50,14);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetBinContent(51,121);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetEntries(49650);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 49650  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  124.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  57.81");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet1_ref__120);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_pt_jet1_ref__120->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet1_ref__120->Draw("HIST");
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->Modified();
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->cd();
   pt_jet1_2018_QuadJet_noTag_18_ideal_ref->SetSelected(pt_jet1_2018_QuadJet_noTag_18_ideal_ref);
}
