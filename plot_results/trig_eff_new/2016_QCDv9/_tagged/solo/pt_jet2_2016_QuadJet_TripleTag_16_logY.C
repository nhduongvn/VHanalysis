#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_TripleTag_16/pt_jet2_2016_QuadJet_TripleTag_16
//=========  (Mon Apr 24 10:39:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_TripleTag_16 = new TCanvas("pt_jet2_2016_QuadJet_TripleTag_16", "pt_jet2_2016_QuadJet_TripleTag_16",0,0,600,600);
   pt_jet2_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_TripleTag_16->Range(-100,-0.7817195,566.6667,4.025175);
   pt_jet2_2016_QuadJet_TripleTag_16->SetFillColor(0);
   pt_jet2_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   pt_jet2_2016_QuadJet_TripleTag_16->SetLogy();
   pt_jet2_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15);
   pt_jet2_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet2__266 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet2__266","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(5,106);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(6,1048);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(7,1805);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(8,1849);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(9,1577);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(10,1173);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(11,961);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(12,724);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(13,531);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(14,427);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(15,311);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(16,229);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(17,181);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(18,119);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(19,93);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(20,80);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(21,61);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(22,46);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(23,45);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(24,20);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(25,18);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(26,13);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(27,14);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(28,13);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(29,11);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(30,5);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(31,8);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(32,9);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(33,5);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(34,4);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(35,4);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(36,4);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(37,2);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(39,1);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(41,1);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(42,1);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(43,1);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(44,1);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(45,1);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetBinContent(46,1);
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetEntries(11503);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 11503  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  96.23");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  39.68");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet2__266->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet2__266);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet2__266->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet2__266->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet2__266->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet2__266->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__266->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__266->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__266->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet2__266->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__266->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__266->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__266->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet2__266->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet2__266->Draw("HIST");
   pt_jet2_2016_QuadJet_TripleTag_16->Modified();
   pt_jet2_2016_QuadJet_TripleTag_16->cd();
   pt_jet2_2016_QuadJet_TripleTag_16->SetSelected(pt_jet2_2016_QuadJet_TripleTag_16);
}
