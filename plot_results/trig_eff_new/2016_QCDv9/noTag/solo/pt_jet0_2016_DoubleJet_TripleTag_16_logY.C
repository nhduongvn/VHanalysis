#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_DoubleJet_TripleTag_16/pt_jet0_2016_DoubleJet_TripleTag_16
//=========  (Thu Apr 27 10:18:35 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_DoubleJet_TripleTag_16 = new TCanvas("pt_jet0_2016_DoubleJet_TripleTag_16", "pt_jet0_2016_DoubleJet_TripleTag_16",0,0,600,600);
   pt_jet0_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   pt_jet0_2016_DoubleJet_TripleTag_16->Range(-100,-0.2772054,566.6667,4.255761);
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
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(9,151);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(10,765);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(11,1756);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(12,2669);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(13,3264);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(14,3228);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(15,3349);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(16,3272);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(17,2969);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(18,2830);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(19,2580);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(20,2227);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(21,2095);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(22,1839);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(23,1716);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(24,1509);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(25,1404);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(26,1194);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(27,1076);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(28,1002);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(29,913);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(30,837);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(31,739);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(32,629);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(33,549);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(34,539);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(35,463);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(36,445);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(37,427);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(38,361);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(39,357);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(40,292);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(41,245);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(42,239);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(43,248);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(44,219);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(45,204);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(46,179);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(47,157);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(48,157);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(49,136);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(50,117);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(51,1491);
   _DoubleJet_TripleTag_pt_jet0__8->SetEntries(50864);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 50864  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  204.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  84.07");
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
