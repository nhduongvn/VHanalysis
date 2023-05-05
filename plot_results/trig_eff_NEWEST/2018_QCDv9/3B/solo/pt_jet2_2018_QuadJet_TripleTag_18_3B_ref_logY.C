#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_TripleTag_18_3B_ref_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_TripleTag_18_3B_ref/pt_jet2_2018_QuadJet_TripleTag_18_3B_ref
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_TripleTag_18_3B_ref = new TCanvas("pt_jet2_2018_QuadJet_TripleTag_18_3B_ref", "pt_jet2_2018_QuadJet_TripleTag_18_3B_ref",0,0,600,600);
   pt_jet2_2018_QuadJet_TripleTag_18_3B_ref->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_TripleTag_18_3B_ref->Range(-100,-0.8371171,566.6667,4.523753);
   pt_jet2_2018_QuadJet_TripleTag_18_3B_ref->SetFillColor(0);
   pt_jet2_2018_QuadJet_TripleTag_18_3B_ref->SetBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_3B_ref->SetBorderSize(2);
   pt_jet2_2018_QuadJet_TripleTag_18_3B_ref->SetLogy();
   pt_jet2_2018_QuadJet_TripleTag_18_3B_ref->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_TripleTag_18_3B_ref->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18_3B_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_pt_jet2_ref__36 = new TH1D("_QuadJet_TripleTag_3B_pt_jet2_ref__36","",50,0,500);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(5,217);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(6,2016);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(7,4325);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(8,5130);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(9,4608);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(10,3469);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(11,2456);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(12,1802);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(13,1247);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(14,901);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(15,658);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(16,483);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(17,381);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(18,254);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(19,242);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(20,134);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(21,113);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(22,89);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(23,76);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(24,43);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(25,39);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(26,31);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(27,26);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(28,34);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(29,14);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(30,6);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(31,10);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(32,8);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(33,8);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(34,3);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(35,5);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(36,5);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(37,2);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(38,2);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(39,1);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(40,2);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(42,1);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(44,1);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(47,1);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetBinContent(50,2);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetEntries(28845);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_3B_pt_jet2_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28845  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  94.41");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  35.32");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_pt_jet2_ref__36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->SetLineColor(ci);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet2_ref__36->Draw("HIST");
   pt_jet2_2018_QuadJet_TripleTag_18_3B_ref->Modified();
   pt_jet2_2018_QuadJet_TripleTag_18_3B_ref->cd();
   pt_jet2_2018_QuadJet_TripleTag_18_3B_ref->SetSelected(pt_jet2_2018_QuadJet_TripleTag_18_3B_ref);
}
