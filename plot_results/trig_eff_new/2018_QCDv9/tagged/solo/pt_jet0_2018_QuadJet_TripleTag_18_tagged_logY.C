#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_TripleTag_18_tagged_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_TripleTag_18_tagged/pt_jet0_2018_QuadJet_TripleTag_18_tagged
//=========  (Tue Apr 25 23:01:41 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_TripleTag_18_tagged = new TCanvas("pt_jet0_2018_QuadJet_TripleTag_18_tagged", "pt_jet0_2018_QuadJet_TripleTag_18_tagged",0,0,600,600);
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_TripleTag_18_tagged->Range(-100,-0.396275,566.6667,3.566475);
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
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(9,111);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(10,293);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(11,426);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(12,597);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(13,732);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(14,733);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(15,781);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(16,741);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(17,736);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(18,713);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(19,660);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(20,585);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(21,500);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(22,487);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(23,383);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(24,363);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(25,298);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(26,303);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(27,268);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(28,264);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(29,226);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(30,200);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(31,206);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(32,153);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(33,133);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(34,127);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(35,115);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(36,121);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(37,88);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(38,81);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(39,88);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(40,79);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(41,67);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(42,74);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(43,47);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(44,55);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(45,50);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(46,47);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(47,41);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(48,49);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(49,32);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(50,37);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(51,359);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetEntries(12478);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 12478  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  204.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  85.68");
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
