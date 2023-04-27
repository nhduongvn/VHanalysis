#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref/pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref = new TCanvas("pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref", "pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref",0,0,600,600);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref->Range(-100,-0.6314096,566.6667,2.672387);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref->SetFillColor(0);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref->SetBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref->SetBorderSize(2);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref->SetLogy();
   pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet1_ref__63 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet1_ref__63","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(5,1);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(6,25);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(7,102);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(8,106);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(9,108);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(10,116);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(11,112);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(12,108);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(13,113);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(14,65);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(15,59);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(16,60);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(17,40);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(18,42);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(19,23);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(20,27);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(21,25);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(22,17);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(23,12);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(24,15);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(25,11);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(26,9);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(27,7);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(28,8);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(29,6);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(30,8);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(31,5);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(32,4);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(33,2);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(34,3);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(35,2);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(38,1);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(40,4);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(43,2);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(45,1);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(46,1);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(47,1);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(49,2);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetBinContent(51,4);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetEntries(1257);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1257   ");
   ptstats_LaTex = ptstats->AddText("Mean  =    130");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  62.32");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet1_ref__63);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1_ref__63->Draw("HIST");
   pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref->Modified();
   pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref->cd();
   pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref->SetSelected(pt_jet1_2017_QuadJet_TripleTag_17_tagged_ref);
}
