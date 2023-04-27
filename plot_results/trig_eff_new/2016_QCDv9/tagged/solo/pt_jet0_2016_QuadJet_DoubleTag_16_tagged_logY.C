#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_QuadJet_DoubleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_QuadJet_DoubleTag_16_tagged/pt_jet0_2016_QuadJet_DoubleTag_16_tagged
//=========  (Wed Apr 26 16:41:42 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_QuadJet_DoubleTag_16_tagged = new TCanvas("pt_jet0_2016_QuadJet_DoubleTag_16_tagged", "pt_jet0_2016_QuadJet_DoubleTag_16_tagged",0,0,600,600);
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->SetHighLightColor(2);
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->Range(-100,-0.5918759,566.6667,2.316583);
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->SetFillColor(0);
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->SetBorderMode(0);
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->SetBorderSize(2);
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->SetLogy();
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_pt_jet0__113 = new TH1D("_QuadJet_DoubleTag_tagged_pt_jet0__113","",50,0,500);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(7,6);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(8,22);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(9,30);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(10,32);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(11,42);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(12,56);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(13,49);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(14,34);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(15,42);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(16,42);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(17,34);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(18,34);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(19,27);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(20,24);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(21,11);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(22,22);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(23,24);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(24,17);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(25,17);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(26,15);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(27,11);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(28,10);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(29,8);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(30,12);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(31,7);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(32,7);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(33,9);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(34,8);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(35,3);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(36,2);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(37,2);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(38,4);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(39,1);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(40,6);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(41,1);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(42,3);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(44,3);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(45,1);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(46,1);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(47,1);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(49,2);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(50,4);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(51,9);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetEntries(695);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 695    ");
   ptstats_LaTex = ptstats->AddText("Mean  =    179");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  83.87");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_pt_jet0__113);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetXaxis()->SetRange(1,50);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->Draw("HIST");
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->Modified();
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->cd();
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->SetSelected(pt_jet0_2016_QuadJet_DoubleTag_16_tagged);
}
