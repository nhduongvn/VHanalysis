#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_TripleTag_17_tagged_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_TripleTag_17_tagged/pt_jet0_2017_QuadJet_TripleTag_17_tagged
//=========  (Tue Apr 25 23:02:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_TripleTag_17_tagged = new TCanvas("pt_jet0_2017_QuadJet_TripleTag_17_tagged", "pt_jet0_2017_QuadJet_TripleTag_17_tagged",0,0,600,600);
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->Range(-100,-0.3481756,566.6667,3.13358);
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->SetFillColor(0);
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->SetBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->SetBorderSize(2);
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->SetLogy();
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet0__56 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet0__56","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(7,2);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(8,28);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(9,87);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(10,151);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(11,212);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(12,276);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(13,299);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(14,322);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(15,308);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(16,299);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(17,275);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(18,258);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(19,214);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(20,191);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(21,149);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(22,158);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(23,146);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(24,145);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(25,112);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(26,107);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(27,93);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(28,81);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(29,92);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(30,69);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(31,44);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(32,56);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(33,56);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(34,42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(35,42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(36,44);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(37,30);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(38,29);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(39,35);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(40,17);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(41,25);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(42,21);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(43,13);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(44,14);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(45,8);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(46,19);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(47,13);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(48,20);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(49,2);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(50,9);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(51,139);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetEntries(4752);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4752   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  194.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  83.35");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet0__56);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet0__56->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet0__56->Draw("HIST");
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->Modified();
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->cd();
   pt_jet0_2017_QuadJet_TripleTag_17_tagged->SetSelected(pt_jet0_2017_QuadJet_TripleTag_17_tagged);
}
