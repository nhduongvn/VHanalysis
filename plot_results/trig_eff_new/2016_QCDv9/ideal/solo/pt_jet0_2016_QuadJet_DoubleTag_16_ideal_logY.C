#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_QuadJet_DoubleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_QuadJet_DoubleTag_16_ideal/pt_jet0_2016_QuadJet_DoubleTag_16_ideal
//=========  (Tue Apr 25 23:03:08 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_QuadJet_DoubleTag_16_ideal = new TCanvas("pt_jet0_2016_QuadJet_DoubleTag_16_ideal", "pt_jet0_2016_QuadJet_DoubleTag_16_ideal",0,0,600,600);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetHighLightColor(2);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->Range(-100,-0.5918759,566.6667,2.316583);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetFillColor(0);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetBorderMode(0);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetBorderSize(2);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetLogy();
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_pt_jet0__221 = new TH1D("_QuadJet_DoubleTag_ideal_pt_jet0__221","",50,0,500);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(7,6);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(8,22);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(9,30);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(10,32);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(11,43);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(12,56);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(13,50);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(14,34);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(15,42);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(16,42);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(17,34);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(18,35);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(19,28);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(20,24);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(21,11);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(22,22);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(23,24);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(24,18);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(25,17);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(26,15);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(27,12);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(28,10);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(29,8);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(30,12);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(31,7);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(32,7);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(33,9);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(34,8);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(35,3);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(36,2);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(37,2);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(38,4);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(39,1);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(40,6);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(41,1);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(42,3);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(44,3);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(45,1);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(46,1);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(47,1);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(49,2);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(50,4);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(51,9);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetEntries(701);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 701    ");
   ptstats_LaTex = ptstats->AddText("Mean  =    179");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  83.66");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_pt_jet0__221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetXaxis()->SetRange(1,50);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->Draw("HIST");
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->Modified();
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->cd();
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetSelected(pt_jet0_2016_QuadJet_DoubleTag_16_ideal);
}
