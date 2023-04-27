#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_QuadJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_QuadJet_TripleTag_16/pt_jet1_2016_QuadJet_TripleTag_16
//=========  (Thu Apr 27 10:18:36 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_QuadJet_TripleTag_16 = new TCanvas("pt_jet1_2016_QuadJet_TripleTag_16", "pt_jet1_2016_QuadJet_TripleTag_16",0,0,600,600);
   pt_jet1_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   pt_jet1_2016_QuadJet_TripleTag_16->Range(-100,0.6726956,566.6667,4.552718);
   pt_jet1_2016_QuadJet_TripleTag_16->SetFillColor(0);
   pt_jet1_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   pt_jet1_2016_QuadJet_TripleTag_16->SetLogy();
   pt_jet1_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15);
   pt_jet1_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet1__14 = new TH1D("_QuadJet_TripleTag_pt_jet1__14","",50,0,500);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(5,36);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(6,1340);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(7,4611);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(8,7008);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(9,7712);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(10,7351);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(11,6471);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(12,5528);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(13,4661);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(14,3898);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(15,3216);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(16,2626);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(17,2169);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(18,1737);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(19,1437);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(20,1220);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(21,1064);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(22,880);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(23,756);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(24,588);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(25,505);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(26,391);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(27,357);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(28,328);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(29,269);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(30,239);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(31,191);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(32,166);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(33,176);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(34,130);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(35,116);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(36,101);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(37,90);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(38,91);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(39,59);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(40,60);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(41,75);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(42,52);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(43,52);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(44,44);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(45,59);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(46,25);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(47,39);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(48,28);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(49,31);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(50,23);
   _QuadJet_TripleTag_pt_jet1__14->SetBinContent(51,282);
   _QuadJet_TripleTag_pt_jet1__14->SetEntries(68288);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 68288  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  126.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  61.09");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet1__14->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet1__14);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet1__14->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet1__14->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet1__14->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet1__14->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet1__14->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet1__14->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet1__14->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet1__14->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet1__14->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet1__14->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet1__14->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet1__14->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet1__14->Draw("HIST");
   pt_jet1_2016_QuadJet_TripleTag_16->Modified();
   pt_jet1_2016_QuadJet_TripleTag_16->cd();
   pt_jet1_2016_QuadJet_TripleTag_16->SetSelected(pt_jet1_2016_QuadJet_TripleTag_16);
}
