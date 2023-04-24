#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_DoubleJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_DoubleJet_TripleTag_16/pt_jet0_2016_DoubleJet_TripleTag_16
//=========  (Tue Apr 18 16:13:59 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_DoubleJet_TripleTag_16 = new TCanvas("pt_jet0_2016_DoubleJet_TripleTag_16", "pt_jet0_2016_DoubleJet_TripleTag_16",0,0,600,600);
   pt_jet0_2016_DoubleJet_TripleTag_16->SetHighLightColor(2);
   pt_jet0_2016_DoubleJet_TripleTag_16->Range(-100,-0.2771729,566.6667,4.255469);
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
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(10,770);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(11,1757);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(12,2681);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(13,3266);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(14,3225);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(15,3347);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(16,3268);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(17,2968);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(18,2829);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(19,2582);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(20,2233);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(21,2103);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(22,1825);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(23,1722);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(24,1504);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(25,1407);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(26,1196);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(27,1075);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(28,1012);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(29,918);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(30,836);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(31,746);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(32,629);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(33,550);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(34,543);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(35,465);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(36,443);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(37,430);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(38,358);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(39,357);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(40,291);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(41,245);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(42,242);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(43,247);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(44,221);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(45,207);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(46,178);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(47,159);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(48,157);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(49,135);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(50,117);
   _DoubleJet_TripleTag_pt_jet0__8->SetBinContent(51,1489);
   _DoubleJet_TripleTag_pt_jet0__8->SetEntries(50912);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 50912  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  204.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  84.11");
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
