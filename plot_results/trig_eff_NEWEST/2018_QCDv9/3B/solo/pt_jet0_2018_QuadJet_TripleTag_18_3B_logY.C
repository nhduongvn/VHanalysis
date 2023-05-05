#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_TripleTag_18_3B_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_TripleTag_18_3B/pt_jet0_2018_QuadJet_TripleTag_18_3B
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_TripleTag_18_3B = new TCanvas("pt_jet0_2018_QuadJet_TripleTag_18_3B", "pt_jet0_2018_QuadJet_TripleTag_18_3B",0,0,600,600);
   pt_jet0_2018_QuadJet_TripleTag_18_3B->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_TripleTag_18_3B->Range(-100,0.204599,566.6667,3.599289);
   pt_jet0_2018_QuadJet_TripleTag_18_3B->SetFillColor(0);
   pt_jet0_2018_QuadJet_TripleTag_18_3B->SetBorderMode(0);
   pt_jet0_2018_QuadJet_TripleTag_18_3B->SetBorderSize(2);
   pt_jet0_2018_QuadJet_TripleTag_18_3B->SetLogy();
   pt_jet0_2018_QuadJet_TripleTag_18_3B->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_TripleTag_18_3B->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_TripleTag_18_3B->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_pt_jet0__29 = new TH1D("_QuadJet_TripleTag_3B_pt_jet0__29","",50,0,500);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(8,7);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(9,72);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(10,202);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(11,436);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(12,604);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(13,809);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(14,912);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(15,952);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(16,960);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(17,939);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(18,843);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(19,739);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(20,682);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(21,601);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(22,544);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(23,470);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(24,435);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(25,350);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(26,323);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(27,284);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(28,246);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(29,236);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(30,182);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(31,210);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(32,186);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(33,138);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(34,115);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(35,130);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(36,121);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(37,89);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(38,101);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(39,82);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(40,79);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(41,66);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(42,54);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(43,53);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(44,51);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(45,51);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(46,37);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(47,39);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(48,27);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(49,27);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(50,27);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetBinContent(51,302);
   _QuadJet_TripleTag_3B_pt_jet0__29->SetEntries(13813);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_3B_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 13813  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  201.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  80.11");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_pt_jet0__29->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_pt_jet0__29);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_3B_pt_jet0__29->SetLineColor(ci);
   _QuadJet_TripleTag_3B_pt_jet0__29->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_3B_pt_jet0__29->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_3B_pt_jet0__29->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet0__29->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet0__29->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet0__29->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_3B_pt_jet0__29->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet0__29->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet0__29->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet0__29->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet0__29->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet0__29->Draw("HIST");
   pt_jet0_2018_QuadJet_TripleTag_18_3B->Modified();
   pt_jet0_2018_QuadJet_TripleTag_18_3B->cd();
   pt_jet0_2018_QuadJet_TripleTag_18_3B->SetSelected(pt_jet0_2018_QuadJet_TripleTag_18_3B);
}
