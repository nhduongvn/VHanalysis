#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_DoubleJet_DoubleTag_16/pt_jet0_2016_DoubleJet_DoubleTag_16
//=========  (Thu Apr 27 10:19:44 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_DoubleJet_DoubleTag_16 = new TCanvas("pt_jet0_2016_DoubleJet_DoubleTag_16", "pt_jet0_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   pt_jet0_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet0_2016_DoubleJet_DoubleTag_16->Range(-100,-0.6807764,566.6667,3.116688);
   pt_jet0_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   pt_jet0_2016_DoubleJet_DoubleTag_16->SetLogy();
   pt_jet0_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   pt_jet0_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_pt_jet0__11 = new TH1D("_DoubleJet_DoubleTag_pt_jet0__11","",50,0,500);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(8,1);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(9,7);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(10,56);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(11,157);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(12,233);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(13,275);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(14,280);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(15,288);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(16,288);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(17,271);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(18,197);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(19,224);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(20,191);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(21,184);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(22,150);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(23,130);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(24,129);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(25,103);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(26,88);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(27,75);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(28,67);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(29,77);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(30,66);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(31,54);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(32,51);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(33,39);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(34,43);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(35,36);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(36,37);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(37,29);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(38,19);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(39,19);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(40,28);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(41,18);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(42,13);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(43,17);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(44,13);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(45,10);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(46,9);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(47,8);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(48,11);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(49,6);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(50,5);
   _DoubleJet_DoubleTag_pt_jet0__11->SetBinContent(51,87);
   _DoubleJet_DoubleTag_pt_jet0__11->SetEntries(4089);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4089   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  197.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  78.82");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_pt_jet0__11->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_pt_jet0__11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_pt_jet0__11->SetLineColor(ci);
   _DoubleJet_DoubleTag_pt_jet0__11->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_pt_jet0__11->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_pt_jet0__11->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet0__11->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_pt_jet0__11->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet0__11->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_pt_jet0__11->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet0__11->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet0__11->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet0__11->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_pt_jet0__11->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet0__11->Draw("HIST");
   pt_jet0_2016_DoubleJet_DoubleTag_16->Modified();
   pt_jet0_2016_DoubleJet_DoubleTag_16->cd();
   pt_jet0_2016_DoubleJet_DoubleTag_16->SetSelected(pt_jet0_2016_DoubleJet_DoubleTag_16);
}
