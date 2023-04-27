#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref/pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref
//=========  (Thu Apr 27 10:20:01 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref = new TCanvas("pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref", "pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref",0,0,600,600);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->Range(-100,-0.6615213,566.6667,2.943392);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->SetFillColor(0);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderMode(0);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->SetBorderSize(2);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->SetLogy();
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->SetLeftMargin(0.15);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet1_ref__117 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet1_ref__117","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(7,45);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(8,100);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(9,170);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(10,178);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(11,202);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(12,172);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(13,141);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(14,131);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(15,90);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(16,82);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(17,77);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(18,68);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(19,63);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(20,43);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(21,37);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(22,28);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(23,30);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(24,20);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(25,18);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(26,13);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(27,8);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(28,15);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(29,11);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(30,8);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(31,15);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(32,7);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(33,6);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(34,6);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(35,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(36,8);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(37,4);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(38,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(39,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(40,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(41,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(42,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(45,2);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(47,4);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(48,3);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(50,1);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetBinContent(51,4);
   _QuadJet_TripleTag_ideal_pt_jet1_ref__117->SetEntries(1818);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet1_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1818   ");
   ptstats_LaTex = ptstats->AddText("Mean  =    141");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  63.75");
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
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->Modified();
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->cd();
   pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref->SetSelected(pt_jet1_2018_QuadJet_TripleTag_18_ideal_ref);
}
