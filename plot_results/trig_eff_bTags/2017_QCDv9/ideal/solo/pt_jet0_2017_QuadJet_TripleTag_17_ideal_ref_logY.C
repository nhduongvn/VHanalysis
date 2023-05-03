#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref/pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref = new TCanvas("pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref", "pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref",0,0,600,600);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref->Range(-100,-0.5480949,566.6667,1.922554);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref->SetFillColor(0);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref->SetBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref->SetBorderSize(2);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref->SetLogy();
   pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet0_ref__3 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet0_ref__3","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(8,1);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(9,7);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(10,9);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(11,11);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(12,25);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(13,17);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(14,19);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(15,19);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(16,17);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(17,18);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(18,17);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(19,11);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(20,15);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(21,6);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(22,11);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(23,3);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(24,10);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(25,10);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(26,2);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(27,7);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(28,1);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(29,3);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(30,5);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(31,1);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(33,6);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(34,5);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(35,4);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(36,3);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(37,1);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(38,3);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(39,1);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(40,3);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(41,2);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(42,1);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(43,2);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(44,2);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(45,1);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(46,1);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(47,1);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(48,2);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(49,1);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetBinContent(51,8);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetEntries(292);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet0_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 292    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  196.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   90.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet0_ref__3);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0_ref__3->Draw("HIST");
   pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref->Modified();
   pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref->cd();
   pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref->SetSelected(pt_jet0_2017_QuadJet_TripleTag_17_ideal_ref);
}
