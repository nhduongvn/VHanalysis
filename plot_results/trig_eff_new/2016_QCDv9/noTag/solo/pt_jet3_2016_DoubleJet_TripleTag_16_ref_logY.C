#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_TripleTag_16_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_TripleTag_16_ref/pt_jet3_2016_DoubleJet_TripleTag_16_ref
//=========  (Thu Apr 27 10:18:36 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_TripleTag_16_ref = new TCanvas("pt_jet3_2016_DoubleJet_TripleTag_16_ref", "pt_jet3_2016_DoubleJet_TripleTag_16_ref",0,0,600,600);
   pt_jet3_2016_DoubleJet_TripleTag_16_ref->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_ref->Range(-100,-1.030982,566.6667,6.268538);
   pt_jet3_2016_DoubleJet_TripleTag_16_ref->SetFillColor(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ref->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ref->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_TripleTag_16_ref->SetLogy();
   pt_jet3_2016_DoubleJet_TripleTag_16_ref->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_TripleTag_16_ref->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_TripleTag_16_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_pt_jet3_ref__45 = new TH1D("_DoubleJet_TripleTag_pt_jet3_ref__45","",50,0,500);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(5,152296);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(6,182405);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(7,91830);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(8,48274);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(9,26603);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(10,15179);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(11,9034);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(12,5699);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(13,3418);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(14,2215);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(15,1412);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(16,970);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(17,623);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(18,413);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(19,317);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(20,191);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(21,163);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(22,113);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(23,90);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(24,58);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(25,30);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(26,30);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(27,26);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(28,22);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(29,29);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(30,14);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(31,6);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(32,5);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(33,7);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(34,4);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(35,2);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(36,2);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(37,2);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(38,2);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(39,1);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(40,2);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(43,1);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(46,1);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetBinContent(51,1);
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetEntries(541490);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 541490 ");
   ptstats_LaTex = ptstats->AddText("Mean  =   61.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  19.15");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_pt_jet3_ref__45->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_pt_jet3_ref__45);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_pt_jet3_ref__45->SetLineColor(ci);
   _DoubleJet_TripleTag_pt_jet3_ref__45->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_pt_jet3_ref__45->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_pt_jet3_ref__45->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet3_ref__45->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_pt_jet3_ref__45->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet3_ref__45->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_pt_jet3_ref__45->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet3_ref__45->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet3_ref__45->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet3_ref__45->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_pt_jet3_ref__45->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet3_ref__45->Draw("HIST");
   pt_jet3_2016_DoubleJet_TripleTag_16_ref->Modified();
   pt_jet3_2016_DoubleJet_TripleTag_16_ref->cd();
   pt_jet3_2016_DoubleJet_TripleTag_16_ref->SetSelected(pt_jet3_2016_DoubleJet_TripleTag_16_ref);
}
