#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_DoubleJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_DoubleJet_DoubleTag_16/pt_jet3_2016_DoubleJet_DoubleTag_16
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_DoubleJet_DoubleTag_16 = new TCanvas("pt_jet3_2016_DoubleJet_DoubleTag_16", "pt_jet3_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet3_2016_DoubleJet_DoubleTag_16->Range(-100,-0.7505859,566.6667,3.744972);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetLogy();
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_pt_jet3__83 = new TH1D("_DoubleJet_DoubleTag_pt_jet3__83","",50,0,500);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(5,599);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(6,1042);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(7,874);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(8,560);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(9,381);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(10,217);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(11,137);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(12,82);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(13,36);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(14,37);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(15,27);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(16,17);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(17,9);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(18,12);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(19,8);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(20,3);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(21,1);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(22,3);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(23,1);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(24,1);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(26,1);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(27,1);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(28,2);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(29,4);
   _DoubleJet_DoubleTag_pt_jet3__83->SetBinContent(30,2);
   _DoubleJet_DoubleTag_pt_jet3__83->SetEntries(4057);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4057   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  70.58");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  25.32");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_pt_jet3__83->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_pt_jet3__83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_pt_jet3__83->SetLineColor(ci);
   _DoubleJet_DoubleTag_pt_jet3__83->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_pt_jet3__83->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_pt_jet3__83->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet3__83->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_pt_jet3__83->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet3__83->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_pt_jet3__83->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet3__83->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet3__83->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet3__83->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_pt_jet3__83->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet3__83->Draw("HIST");
   pt_jet3_2016_DoubleJet_DoubleTag_16->Modified();
   pt_jet3_2016_DoubleJet_DoubleTag_16->cd();
   pt_jet3_2016_DoubleJet_DoubleTag_16->SetSelected(pt_jet3_2016_DoubleJet_DoubleTag_16);
}
