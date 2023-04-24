#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_QuadJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_QuadJet_DoubleTag_16/pt_jet0_2016_QuadJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:14 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_QuadJet_DoubleTag_16 = new TCanvas("pt_jet0_2016_QuadJet_DoubleTag_16", "pt_jet0_2016_QuadJet_DoubleTag_16",0,0,600,600);
   pt_jet0_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet0_2016_QuadJet_DoubleTag_16->Range(-100,-0.03479956,566.6667,3.323496);
   pt_jet0_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   pt_jet0_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   pt_jet0_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   pt_jet0_2016_QuadJet_DoubleTag_16->SetLogy();
   pt_jet0_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15);
   pt_jet0_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet0_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_pt_jet0__5 = new TH1D("_QuadJet_DoubleTag_pt_jet0__5","",50,0,500);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(6,4);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(7,76);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(8,230);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(9,362);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(10,453);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(11,512);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(12,513);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(13,500);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(14,461);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(15,435);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(16,383);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(17,350);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(18,316);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(19,287);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(20,234);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(21,201);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(22,205);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(23,186);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(24,162);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(25,123);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(26,121);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(27,96);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(28,97);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(29,87);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(30,88);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(31,72);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(32,55);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(33,59);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(34,45);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(35,43);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(36,31);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(37,36);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(38,40);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(39,27);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(40,34);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(41,18);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(42,18);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(43,19);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(44,18);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(45,19);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(46,12);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(47,12);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(48,8);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(49,11);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(50,14);
   _QuadJet_DoubleTag_pt_jet0__5->SetBinContent(51,95);
   _QuadJet_DoubleTag_pt_jet0__5->SetEntries(7168);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7168   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  171.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  81.27");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_pt_jet0__5->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_pt_jet0__5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_pt_jet0__5->SetLineColor(ci);
   _QuadJet_DoubleTag_pt_jet0__5->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_pt_jet0__5->GetXaxis()->SetRange(1,50);
   _QuadJet_DoubleTag_pt_jet0__5->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet0__5->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet0__5->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet0__5->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_pt_jet0__5->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet0__5->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet0__5->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet0__5->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet0__5->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet0__5->Draw("HIST");
   pt_jet0_2016_QuadJet_DoubleTag_16->Modified();
   pt_jet0_2016_QuadJet_DoubleTag_16->cd();
   pt_jet0_2016_QuadJet_DoubleTag_16->SetSelected(pt_jet0_2016_QuadJet_DoubleTag_16);
}
