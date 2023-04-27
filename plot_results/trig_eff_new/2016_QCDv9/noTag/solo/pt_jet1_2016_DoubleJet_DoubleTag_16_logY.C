#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_DoubleTag_16/pt_jet1_2016_DoubleJet_DoubleTag_16
//=========  (Thu Apr 27 10:18:36 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_DoubleTag_16 = new TCanvas("pt_jet1_2016_DoubleJet_DoubleTag_16", "pt_jet1_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_DoubleTag_16->Range(-100,-0.7197089,566.6667,3.46708);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetLogy();
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_pt_jet1__23 = new TH1D("_DoubleJet_DoubleTag_pt_jet1__23","",50,0,500);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(6,1);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(7,12);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(8,49);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(9,172);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(10,417);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(11,590);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(12,494);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(13,426);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(14,300);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(15,283);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(16,197);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(17,192);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(18,128);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(19,121);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(20,110);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(21,81);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(22,80);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(23,75);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(24,33);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(25,45);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(26,29);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(27,29);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(28,28);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(29,21);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(30,13);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(31,8);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(32,15);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(33,11);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(34,6);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(35,8);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(36,5);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(37,2);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(38,8);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(39,8);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(40,4);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(41,4);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(42,1);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(43,1);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(44,1);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(45,2);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(46,4);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(47,2);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(48,2);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(49,1);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(50,1);
   _DoubleJet_DoubleTag_pt_jet1__23->SetBinContent(51,19);
   _DoubleJet_DoubleTag_pt_jet1__23->SetEntries(4039);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4039   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  143.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  56.29");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_pt_jet1__23->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_pt_jet1__23);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_pt_jet1__23->SetLineColor(ci);
   _DoubleJet_DoubleTag_pt_jet1__23->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_pt_jet1__23->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_pt_jet1__23->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet1__23->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_pt_jet1__23->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet1__23->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_pt_jet1__23->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet1__23->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet1__23->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet1__23->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_pt_jet1__23->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet1__23->Draw("HIST");
   pt_jet1_2016_DoubleJet_DoubleTag_16->Modified();
   pt_jet1_2016_DoubleJet_DoubleTag_16->cd();
   pt_jet1_2016_DoubleJet_DoubleTag_16->SetSelected(pt_jet1_2016_DoubleJet_DoubleTag_16);
}
