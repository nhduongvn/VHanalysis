#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_DoubleTag_16/pt_jet3_2016_DoubleJet_DoubleTag_16
//=========  (Tue Apr 25 23:03:06 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_DoubleTag_16 = new TCanvas("pt_jet3_2016_DoubleJet_DoubleTag_16", "pt_jet3_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_DoubleTag_16->Range(-100,-0.7507939,566.6667,3.746844);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetLogy();
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_pt_jet3__47 = new TH1D("_DoubleJet_DoubleTag_pt_jet3__47","",50,0,500);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(5,604);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(6,1046);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(7,879);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(8,566);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(9,383);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(10,217);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(11,136);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(12,83);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(13,36);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(14,37);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(15,27);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(16,17);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(17,10);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(18,12);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(19,8);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(20,3);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(21,1);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(22,3);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(23,1);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(24,1);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(26,1);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(27,1);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(28,2);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(29,4);
   _DoubleJet_DoubleTag_pt_jet3__47->SetBinContent(30,2);
   _DoubleJet_DoubleTag_pt_jet3__47->SetEntries(4080);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4080   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  70.57");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  25.31");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_pt_jet3__47->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_pt_jet3__47);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_pt_jet3__47->SetLineColor(ci);
   _DoubleJet_DoubleTag_pt_jet3__47->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_pt_jet3__47->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_pt_jet3__47->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet3__47->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_pt_jet3__47->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet3__47->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_pt_jet3__47->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet3__47->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet3__47->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet3__47->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_pt_jet3__47->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet3__47->Draw("HIST");
   pt_jet3_2016_DoubleJet_DoubleTag_16->Modified();
   pt_jet3_2016_DoubleJet_DoubleTag_16->cd();
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetSelected(pt_jet3_2016_DoubleJet_DoubleTag_16);
}
