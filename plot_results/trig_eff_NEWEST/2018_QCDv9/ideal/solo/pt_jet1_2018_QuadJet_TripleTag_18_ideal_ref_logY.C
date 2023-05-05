#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref/pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref
//=========  (Wed May  3 17:41:46 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref = new TCanvas("pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref", "pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref",0,0,600,600);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->Range(-100,-0.6643998,566.6667,2.969298);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->SetFillColor(0);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderMode(0);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderSize(2);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->SetLogy();
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->SetLeftMargin(0.15);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet1_ref__6 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet1_ref__6","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(7,50);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(8,109);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(9,172);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(10,196);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(11,213);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(12,185);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(13,151);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(14,144);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(15,95);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(16,91);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(17,81);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(18,69);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(19,68);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(20,43);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(21,38);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(22,32);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(23,36);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(24,22);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(25,18);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(26,15);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(27,10);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(28,15);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(29,12);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(30,8);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(31,15);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(32,8);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(33,6);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(34,7);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(35,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(36,8);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(37,5);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(38,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(39,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(40,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(41,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(42,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(45,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(47,4);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(48,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(50,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetBinContent(51,4);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetEntries(1943);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1943   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  140.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  62.96");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet1_ref__6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__6->Draw("HIST");
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->Modified();
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->cd();
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->SetSelected(pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref);
}
