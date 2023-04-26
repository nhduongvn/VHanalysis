#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_DoubleJet_TripleTag_16/pt_jet0_2016_DoubleJet_TripleTag_16
//=========  (Tue Apr 25 23:03:05 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_DoubleJet_TripleTag_16 = new TCanvas("pt_jet0_2016_DoubleJet_TripleTag_16", "pt_jet0_2016_DoubleJet_TripleTag_16",0,0,600,600);
   pt_jet0_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   pt_jet0_2016_DoubleJet_TripleTag_16->Range(-100,-0.2773995,566.6667,4.257508);
   pt_jet0_2016_DoubleJet_TripleTag_16->SetFillColor(0);
   pt_jet0_2016_DoubleJet_TripleTag_16->SetBorderMode(0);
   pt_jet0_2016_DoubleJet_TripleTag_16->SetBorderSize(2);
   pt_jet0_2016_DoubleJet_TripleTag_16->SetLogy();
   pt_jet0_2016_DoubleJet_TripleTag_16->SetLeftMargin(0.15);
   pt_jet0_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet0_2016_DoubleJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_pt_jet0__8 = new TH1D("_DoubleJet_TripleTag_pt_jet0__8","",50,0,500);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(7,3);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(8,23);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(9,153);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(10,772);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(11,1770);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(12,2698);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(13,3280);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(14,3245);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(15,3361);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(16,3288);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(17,2983);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(18,2840);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(19,2599);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(20,2245);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(21,2101);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(22,1840);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(23,1732);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(24,1506);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(25,1415);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(26,1201);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(27,1083);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(28,1014);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(29,922);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(30,837);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(31,749);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(32,636);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(33,551);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(34,542);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(35,470);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(36,444);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(37,430);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(38,364);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(39,357);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(40,295);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(41,248);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(42,241);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(43,250);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(44,219);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(45,207);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(46,178);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(47,160);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(48,157);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(49,136);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(50,117);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(51,1496);
   _DoubleJet_TripleTag_pt_jet0__8->SetEntries(51158);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 51158  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  204.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  84.09");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_pt_jet0__8->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_pt_jet0__8);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_pt_jet0__8->SetLineColor(ci);
   _DoubleJet_TripleTag_pt_jet0__8->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _DoubleJet_TripleTag_pt_jet0__8->GetXaxis()->SetRange(1,50);
   _DoubleJet_TripleTag_pt_jet0__8->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet0__8->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_pt_jet0__8->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet0__8->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_pt_jet0__8->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet0__8->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet0__8->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_pt_jet0__8->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_pt_jet0__8->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_pt_jet0__8->Draw("HIST");
   pt_jet0_2016_DoubleJet_TripleTag_16->Modified();
   pt_jet0_2016_DoubleJet_TripleTag_16->cd();
   pt_jet0_2016_DoubleJet_TripleTag_16->SetSelected(pt_jet0_2016_DoubleJet_TripleTag_16);
}
