#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_TripleTag_17_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_TripleTag_17_ref/pt_jet3_2017_QuadJet_TripleTag_17_ref
//=========  (Mon Apr 24 10:39:16 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_TripleTag_17_ref = new TCanvas("pt_jet3_2017_QuadJet_TripleTag_17_ref", "pt_jet3_2017_QuadJet_TripleTag_17_ref",0,0,600,600);
   pt_jet3_2017_QuadJet_TripleTag_17_ref->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_TripleTag_17_ref->Range(-100,-1.02441,566.6667,6.209386);
   pt_jet3_2017_QuadJet_TripleTag_17_ref->SetFillColor(0);
   pt_jet3_2017_QuadJet_TripleTag_17_ref->SetBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_ref->SetBorderSize(2);
   pt_jet3_2017_QuadJet_TripleTag_17_ref->SetLogy();
   pt_jet3_2017_QuadJet_TripleTag_17_ref->SetLeftMargin(0.15);
   pt_jet3_2017_QuadJet_TripleTag_17_ref->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_TripleTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet3_ref__87 = new TH1D("_QuadJet_TripleTag_pt_jet3_ref__87","",50,0,500);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(5,134204);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(6,161606);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(7,79347);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(8,42168);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(9,23625);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(10,13449);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(11,8136);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(12,4732);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(13,2999);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(14,1976);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(15,1300);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(16,776);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(17,529);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(18,380);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(19,237);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(20,165);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(21,142);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(22,94);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(23,61);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(24,58);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(25,45);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(26,24);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(27,21);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(28,21);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(29,14);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(30,12);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(31,6);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(32,5);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(33,7);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(34,2);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(35,3);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(36,1);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(37,4);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(38,2);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(40,1);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(41,2);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(45,1);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(47,2);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(49,1);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetBinContent(51,2);
   _QuadJet_TripleTag_pt_jet3_ref__87->SetEntries(476160);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 476160 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  61.65");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  19.12");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet3_ref__87->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet3_ref__87);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet3_ref__87->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet3_ref__87->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet3_ref__87->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet3_ref__87->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3_ref__87->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3_ref__87->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3_ref__87->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet3_ref__87->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3_ref__87->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3_ref__87->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3_ref__87->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3_ref__87->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3_ref__87->Draw("HIST");
   pt_jet3_2017_QuadJet_TripleTag_17_ref->Modified();
   pt_jet3_2017_QuadJet_TripleTag_17_ref->cd();
   pt_jet3_2017_QuadJet_TripleTag_17_ref->SetSelected(pt_jet3_2017_QuadJet_TripleTag_17_ref);
}
