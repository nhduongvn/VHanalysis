#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_TripleTag_17/pt_jet1_2017_QuadJet_TripleTag_17
//=========  (Mon Apr 24 10:39:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_TripleTag_17 = new TCanvas("pt_jet1_2017_QuadJet_TripleTag_17", "pt_jet1_2017_QuadJet_TripleTag_17",0,0,600,600);
   pt_jet1_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_TripleTag_17->Range(-100,-0.7090701,566.6667,3.371331);
   pt_jet1_2017_QuadJet_TripleTag_17->SetFillColor(0);
   pt_jet1_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   pt_jet1_2017_QuadJet_TripleTag_17->SetLogy();
   pt_jet1_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet1__254 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet1__254","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(6,15);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(7,91);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(8,310);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(9,414);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(10,412);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(11,485);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(12,379);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(13,334);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(14,295);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(15,253);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(16,226);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(17,176);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(18,131);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(19,104);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(20,105);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(21,79);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(22,60);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(23,45);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(24,47);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(25,39);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(26,22);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(27,25);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(28,30);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(29,33);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(30,19);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(31,25);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(32,14);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(33,13);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(34,5);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(35,12);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(36,8);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(37,5);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(38,5);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(39,7);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(40,4);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(41,4);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(42,7);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(43,6);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(44,1);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(45,3);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(46,2);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(47,3);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(50,2);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetBinContent(51,14);
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetEntries(4269);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4269   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  137.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  61.69");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet1__254->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet1__254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet1__254->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet1__254->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet1__254->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet1__254->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__254->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet1__254->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__254->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet1__254->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__254->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__254->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__254->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet1__254->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__254->Draw("HIST");
   pt_jet1_2017_QuadJet_TripleTag_17->Modified();
   pt_jet1_2017_QuadJet_TripleTag_17->cd();
   pt_jet1_2017_QuadJet_TripleTag_17->SetSelected(pt_jet1_2017_QuadJet_TripleTag_17);
}
