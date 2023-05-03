#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTag_18_ideal_ref/pt_jet0_2018_QuadJet_noTag_18_ideal_ref
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_noTag_18_ideal_ref = new TCanvas("pt_jet0_2018_QuadJet_noTag_18_ideal_ref", "pt_jet0_2018_QuadJet_noTag_18_ideal_ref",0,0,600,600);
   pt_jet0_2018_QuadJet_noTag_18_ideal_ref->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_noTag_18_ideal_ref->Range(-100,-0.2954886,566.6667,2.659397);
   pt_jet0_2018_QuadJet_noTag_18_ideal_ref->SetFillColor(0);
   pt_jet0_2018_QuadJet_noTag_18_ideal_ref->SetBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_ideal_ref->SetBorderSize(2);
   pt_jet0_2018_QuadJet_noTag_18_ideal_ref->SetLogy();
   pt_jet0_2018_QuadJet_noTag_18_ideal_ref->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_pt_jet0_ref__6 = new TH1D("_QuadJet_noTag_ideal_pt_jet0_ref__6","",50,0,500);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(8,2);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(9,32);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(10,44);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(11,61);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(12,122);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(13,99);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(14,114);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(15,113);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(16,110);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(17,100);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(18,99);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(19,87);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(20,79);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(21,72);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(22,70);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(23,56);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(24,57);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(25,42);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(26,34);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(27,49);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(28,41);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(29,28);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(30,22);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(31,25);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(32,27);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(33,16);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(34,22);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(35,14);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(36,14);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(37,8);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(38,5);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(39,14);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(40,14);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(41,12);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(42,12);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(43,6);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(44,11);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(45,8);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(46,4);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(47,4);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(48,4);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(49,3);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(50,2);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetBinContent(51,45);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetEntries(1803);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_pt_jet0_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1803   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  199.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  83.73");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_pt_jet0_ref__6->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_pt_jet0_ref__6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_pt_jet0_ref__6->SetLineColor(ci);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_ideal_pt_jet0_ref__6->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_pt_jet0_ref__6->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_pt_jet0_ref__6->Draw("HIST");
   pt_jet0_2018_QuadJet_noTag_18_ideal_ref->Modified();
   pt_jet0_2018_QuadJet_noTag_18_ideal_ref->cd();
   pt_jet0_2018_QuadJet_noTag_18_ideal_ref->SetSelected(pt_jet0_2018_QuadJet_noTag_18_ideal_ref);
}
