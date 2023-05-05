#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_TripleTag_18_ideal_logY()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_TripleTag_18_ideal/pt_jet1_2018_QuadJet_TripleTag_18_ideal
//=========  (Wed May  3 17:41:46 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_TripleTag_18_ideal = new TCanvas("pt_jet1_2018_QuadJet_TripleTag_18_ideal", "pt_jet1_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->Range(-100,-0.6464388,566.6667,2.807649);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetLogy();
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet1__5 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet1__5","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(7,17);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(8,43);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(9,91);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(10,121);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(11,153);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(12,135);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(13,120);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(14,116);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(15,77);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(16,80);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(17,68);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(18,55);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(19,56);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(20,37);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(21,28);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(22,26);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(23,31);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(24,19);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(25,16);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(26,13);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(27,9);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(28,12);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(29,10);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(30,7);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(31,10);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(32,6);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(33,5);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(34,5);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(35,2);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(36,7);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(37,4);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(38,2);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(39,1);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(41,1);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(42,1);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(45,2);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(47,4);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(48,2);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(50,1);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetBinContent(51,2);
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetEntries(1395);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1395   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  148.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  64.29");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet1__5->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet1__5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet1__5->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet1__5->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet1__5->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet1__5->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__5->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__5->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__5->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet1__5->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__5->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__5->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__5->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet1__5->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet1__5->Draw("HIST");
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->Modified();
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->cd();
   pt_jet1_2018_QuadJet_TripleTag_18_ideal->SetSelected(pt_jet1_2018_QuadJet_TripleTag_18_ideal);
}
