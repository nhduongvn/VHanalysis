#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_TripleTag_16/pt_jet2_2016_QuadJet_TripleTag_16
//=========  (Wed Apr 26 16:41:41 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_TripleTag_16 = new TCanvas("pt_jet2_2016_QuadJet_TripleTag_16", "pt_jet2_2016_QuadJet_TripleTag_16",0,0,600,600);
   pt_jet2_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_TripleTag_16->Range(-100,-0.8855009,566.6667,4.959208);
   pt_jet2_2016_QuadJet_TripleTag_16->SetFillColor(0);
   pt_jet2_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   pt_jet2_2016_QuadJet_TripleTag_16->SetLogy();
   pt_jet2_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15);
   pt_jet2_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet2__26 = new TH1D("_QuadJet_TripleTag_pt_jet2__26","",50,0,500);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(5,835);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(6,8126);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(7,12508);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(8,11550);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(9,9217);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(10,6911);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(11,5052);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(12,3589);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(13,2639);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(14,1928);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(15,1417);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(16,1035);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(17,808);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(18,561);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(19,449);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(20,368);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(21,264);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(22,192);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(23,149);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(24,127);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(25,102);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(26,75);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(27,63);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(28,52);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(29,35);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(30,38);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(31,30);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(32,35);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(33,27);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(34,11);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(35,12);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(36,9);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(37,12);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(38,8);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(39,9);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(40,4);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(41,6);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(42,5);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(43,6);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(44,4);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(45,4);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(46,4);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(48,1);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(49,3);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(50,1);
   _QuadJet_TripleTag_pt_jet2__26->SetBinContent(51,7);
   _QuadJet_TripleTag_pt_jet2__26->SetEntries(68288);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 68288  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  90.94");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  37.16");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet2__26->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet2__26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet2__26->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet2__26->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet2__26->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet2__26->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__26->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet2__26->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__26->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet2__26->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__26->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__26->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet2__26->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet2__26->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet2__26->Draw("HIST");
   pt_jet2_2016_QuadJet_TripleTag_16->Modified();
   pt_jet2_2016_QuadJet_TripleTag_16->cd();
   pt_jet2_2016_QuadJet_TripleTag_16->SetSelected(pt_jet2_2016_QuadJet_TripleTag_16);
}
