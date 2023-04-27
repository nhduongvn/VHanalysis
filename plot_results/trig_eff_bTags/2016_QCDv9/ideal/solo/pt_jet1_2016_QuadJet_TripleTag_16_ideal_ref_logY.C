#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref/pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref = new TCanvas("pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref", "pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref",0,0,600,600);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->Range(-100,-0.6244274,566.6667,2.609546);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->SetFillColor(0);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->SetLogy();
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet1_ref__231 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet1_ref__231","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(5,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(6,22);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(7,58);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(8,71);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(9,102);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(10,90);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(11,82);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(12,78);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(13,74);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(14,49);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(15,43);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(16,44);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(17,24);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(18,28);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(19,23);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(20,33);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(21,27);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(22,25);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(23,18);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(24,9);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(25,10);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(26,9);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(27,5);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(28,7);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(29,8);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(30,6);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(31,4);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(32,3);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(33,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(34,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(35,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(36,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(37,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(38,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(40,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(41,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(42,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(43,5);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(45,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetBinContent(51,4);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetEntries(978);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 978    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  136.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  67.04");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet1_ref__231);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__231->Draw("HIST");
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->Modified();
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->cd();
   pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref->SetSelected(pt_jet1_2016_QuadJet_TripleTag_16_ideal_ref);
}
