#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_TripleTag_18_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_TripleTag_18/pt_jet2_2018_QuadJet_TripleTag_18
//=========  (Mon Apr 24 10:45:56 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_TripleTag_18 = new TCanvas("pt_jet2_2018_QuadJet_TripleTag_18", "pt_jet2_2018_QuadJet_TripleTag_18",0,0,600,600);
   pt_jet2_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_TripleTag_18->Range(-100,-0.7828814,566.6667,4.035632);
   pt_jet2_2018_QuadJet_TripleTag_18->SetFillColor(0);
   pt_jet2_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   pt_jet2_2018_QuadJet_TripleTag_18->SetLogy();
   pt_jet2_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet2__68 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet2__68","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(5,40);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(6,523);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(7,1336);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(8,1889);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(9,1831);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(10,1617);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(11,1329);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(12,975);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(13,702);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(14,556);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(15,406);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(16,295);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(17,257);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(18,152);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(19,112);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(20,100);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(21,84);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(22,74);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(23,51);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(24,28);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(25,26);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(26,18);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(27,12);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(28,13);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(29,11);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(30,9);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(31,9);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(32,5);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(33,4);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(34,4);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(35,4);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(36,5);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(38,2);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(39,2);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(40,2);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(43,2);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(44,1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(45,1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(46,1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetBinContent(50,1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetEntries(12489);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 12489  ");
   ptstats_LaTex = ptstats->AddText("Mean  =    103");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  39.44");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet2__68);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet2__68->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__68->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__68->Draw("HIST");
   pt_jet2_2018_QuadJet_TripleTag_18->Modified();
   pt_jet2_2018_QuadJet_TripleTag_18->cd();
   pt_jet2_2018_QuadJet_TripleTag_18->SetSelected(pt_jet2_2018_QuadJet_TripleTag_18);
}
