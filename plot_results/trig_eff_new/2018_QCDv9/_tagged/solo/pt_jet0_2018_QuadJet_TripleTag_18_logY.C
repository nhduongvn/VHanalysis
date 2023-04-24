#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_TripleTag_18_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_TripleTag_18/pt_jet0_2018_QuadJet_TripleTag_18
//=========  (Mon Apr 24 10:45:56 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_TripleTag_18 = new TCanvas("pt_jet0_2018_QuadJet_TripleTag_18", "pt_jet0_2018_QuadJet_TripleTag_18",0,0,600,600);
   pt_jet0_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_TripleTag_18->Range(-100,-0.3962055,566.6667,3.565849);
   pt_jet0_2018_QuadJet_TripleTag_18->SetFillColor(0);
   pt_jet0_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   pt_jet0_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   pt_jet0_2018_QuadJet_TripleTag_18->SetLogy();
   pt_jet0_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet0__56 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet0__56","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(6,2);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(7,2);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(8,24);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(9,110);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(10,293);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(11,427);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(12,595);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(13,735);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(14,732);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(15,780);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(16,741);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(17,739);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(18,714);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(19,663);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(20,586);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(21,499);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(22,490);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(23,383);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(24,363);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(25,299);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(26,302);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(27,269);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(28,266);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(29,225);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(30,203);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(31,206);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(32,153);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(33,132);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(34,127);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(35,115);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(36,122);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(37,88);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(38,81);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(39,88);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(40,79);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(41,68);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(42,72);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(43,47);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(44,55);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(45,50);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(46,48);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(47,41);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(48,49);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(49,32);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(50,37);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetBinContent(51,357);
   _QuadJet_TripleTag_tagged_pt_jet0__56->SetEntries(12489);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 12489  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  204.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  85.65");
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
   pt_jet0_2018_QuadJet_TripleTag_18->Modified();
   pt_jet0_2018_QuadJet_TripleTag_18->cd();
   pt_jet0_2018_QuadJet_TripleTag_18->SetSelected(pt_jet0_2018_QuadJet_TripleTag_18);
}
