#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_TripleTag_18_tagged_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_TripleTag_18_tagged/pt_jet0_2018_QuadJet_TripleTag_18_tagged
//=========  (Thu Apr 27 10:18:10 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_TripleTag_18_tagged = new TCanvas("pt_jet0_2018_QuadJet_TripleTag_18_tagged", "pt_jet0_2018_QuadJet_TripleTag_18_tagged",0,0,600,600);
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->Range(-100,-0.3965523,566.6667,3.568971);
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetFillColor(0);
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetBorderMode(0);
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetBorderSize(2);
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetLogy();
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet0__56 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet0__56","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(6,2);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(7,2);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(8,25);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(9,110);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(10,296);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(11,431);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(12,607);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(13,739);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(14,740);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(15,785);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(16,745);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(17,735);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(18,719);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(19,662);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(20,583);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(21,501);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(22,488);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(23,384);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(24,362);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(25,299);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(26,305);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(27,269);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(28,268);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(29,228);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(30,201);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(31,206);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(32,157);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(33,132);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(34,127);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(35,116);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(36,122);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(37,89);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(38,80);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(39,89);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(40,81);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(41,68);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(42,74);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(43,47);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(44,55);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(45,50);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(46,49);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(47,41);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(48,50);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(49,32);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(50,37);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(51,361);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetEntries(12549);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 12549  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  204.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  85.78");
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
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->Modified();
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->cd();
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetSelected(pt_jet0_2018_QuadJet_TripleTag_18_tagged);
}
