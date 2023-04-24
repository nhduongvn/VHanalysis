#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_DoubleJet_DoubleTag_16/pt_jet0_2016_DoubleJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_DoubleJet_DoubleTag_16 = new TCanvas("pt_jet0_2016_DoubleJet_DoubleTag_16", "pt_jet0_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   pt_jet0_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet0_2016_DoubleJet_DoubleTag_16->Range(-100,-0.5749504,566.6667,2.164253);
   pt_jet0_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   pt_jet0_2016_DoubleJet_DoubleTag_16->SetLogy();
   pt_jet0_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   pt_jet0_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_pt_jet0__227 = new TH1D("_DoubleJet_DoubleTag_tagged_pt_jet0__227","",50,0,500);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(9,1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(10,9);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(11,22);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(12,23);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(13,32);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(14,29);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(15,41);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(16,30);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(17,23);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(18,17);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(19,25);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(20,18);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(21,21);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(22,16);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(23,18);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(24,19);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(25,11);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(26,12);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(27,6);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(28,11);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(29,9);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(30,10);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(31,7);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(32,8);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(33,6);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(34,3);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(35,4);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(36,6);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(37,3);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(39,7);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(40,3);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(41,2);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(42,5);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(43,2);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(44,2);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(46,1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(47,2);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(48,1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetBinContent(51,14);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetEntries(479);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 479    ");
   ptstats_LaTex = ptstats->AddText("Mean  =    202");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  81.97");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_pt_jet0__227);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__227->Draw("HIST");
   pt_jet0_2016_DoubleJet_DoubleTag_16->Modified();
   pt_jet0_2016_DoubleJet_DoubleTag_16->cd();
   pt_jet0_2016_DoubleJet_DoubleTag_16->SetSelected(pt_jet0_2016_DoubleJet_DoubleTag_16);
}
