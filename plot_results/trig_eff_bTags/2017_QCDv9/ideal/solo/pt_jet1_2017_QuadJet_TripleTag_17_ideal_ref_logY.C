#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref/pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref
//=========  (Thu Apr 27 10:19:54 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref = new TCanvas("pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref", "pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref",0,0,600,600);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->Range(-100,-0.6309396,566.6667,2.668156);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->SetFillColor(0);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->SetBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->SetBorderSize(2);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->SetLogy();
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet1_ref__117 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet1_ref__117","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(7,44);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(8,77);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(9,98);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(10,115);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(11,111);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(12,108);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(13,113);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(14,65);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(15,59);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(16,60);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(17,40);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(18,42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(19,23);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(20,27);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(21,25);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(22,17);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(23,12);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(24,15);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(25,11);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(26,9);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(27,7);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(28,8);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(29,6);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(30,8);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(31,5);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(32,4);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(33,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(34,3);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(35,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(38,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(40,4);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(43,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(45,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(46,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(47,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(49,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(51,4);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetEntries(1132);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1132   ");
   ptstats_LaTex = ptstats->AddText("Mean  =    137");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  61.78");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet1_ref__117);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->Draw("HIST");
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->Modified();
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->cd();
   pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref->SetSelected(pt_jet1_2017_QuadJet_TripleTag_17_ideal_ref);
}
