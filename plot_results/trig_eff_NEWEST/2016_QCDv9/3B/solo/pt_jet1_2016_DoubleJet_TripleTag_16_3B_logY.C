#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_TripleTag_16_3B_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_TripleTag_16_3B/pt_jet1_2016_DoubleJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_TripleTag_16_3B = new TCanvas("pt_jet1_2016_DoubleJet_TripleTag_16_3B", "pt_jet1_2016_DoubleJet_TripleTag_16_3B",0,0,600,600);
   pt_jet1_2016_DoubleJet_TripleTag_16_3B->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_TripleTag_16_3B->Range(-100,-0.2127192,566.6667,3.675385);
   pt_jet1_2016_DoubleJet_TripleTag_16_3B->SetFillColor(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_3B->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_3B->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_TripleTag_16_3B->SetLogy();
   pt_jet1_2016_DoubleJet_TripleTag_16_3B->SetLeftMargin(0.15);
   pt_jet1_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_3B_pt_jet1__65 = new TH1D("_DoubleJet_TripleTag_3B_pt_jet1__65","",50,0,500);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(10,783);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(11,1021);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(12,887);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(13,807);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(14,685);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(15,562);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(16,427);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(17,361);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(18,290);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(19,262);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(20,227);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(21,174);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(22,164);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(23,119);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(24,83);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(25,87);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(26,85);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(27,55);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(28,42);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(29,40);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(30,38);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(31,29);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(32,26);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(33,25);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(34,20);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(35,17);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(36,14);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(37,15);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(38,13);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(39,10);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(40,8);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(41,10);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(42,5);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(43,13);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(44,4);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(45,15);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(46,6);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(47,6);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(48,5);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(49,4);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(50,3);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetBinContent(51,46);
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetEntries(7493);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_3B_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7493   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  151.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  60.07");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_3B_pt_jet1__65->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_3B_pt_jet1__65);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_3B_pt_jet1__65->SetLineColor(ci);
   _DoubleJet_TripleTag_3B_pt_jet1__65->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_3B_pt_jet1__65->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_3B_pt_jet1__65->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet1__65->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_pt_jet1__65->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet1__65->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_3B_pt_jet1__65->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet1__65->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet1__65->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_pt_jet1__65->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_pt_jet1__65->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_pt_jet1__65->Draw("HIST");
   pt_jet1_2016_DoubleJet_TripleTag_16_3B->Modified();
   pt_jet1_2016_DoubleJet_TripleTag_16_3B->cd();
   pt_jet1_2016_DoubleJet_TripleTag_16_3B->SetSelected(pt_jet1_2016_DoubleJet_TripleTag_16_3B);
}
