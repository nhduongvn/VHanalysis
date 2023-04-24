#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_DoubleTag_16/pt_jet3_2016_QuadJet_DoubleTag_16
//=========  (Tue Apr 18 16:14:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_DoubleTag_16 = new TCanvas("pt_jet3_2016_QuadJet_DoubleTag_16", "pt_jet3_2016_QuadJet_DoubleTag_16",0,0,600,600);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_DoubleTag_16->Range(-100,-0.7936863,566.6667,4.132876);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetLogy();
   pt_jet3_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_pt_jet3__77 = new TH1D("_QuadJet_DoubleTag_pt_jet3__77","",50,0,500);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(5,1153);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(6,2305);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(7,1507);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(8,929);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(9,488);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(10,271);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(11,171);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(12,97);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(13,72);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(14,46);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(15,29);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(16,12);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(17,16);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(18,12);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(19,5);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(20,3);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(21,3);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(22,5);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(23,1);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(24,2);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(27,2);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(28,1);
   _QuadJet_DoubleTag_pt_jet3__77->SetBinContent(29,1);
   _QuadJet_DoubleTag_pt_jet3__77->SetEntries(7131);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7131   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  66.55");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   21.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_pt_jet3__77->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_pt_jet3__77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_pt_jet3__77->SetLineColor(ci);
   _QuadJet_DoubleTag_pt_jet3__77->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_pt_jet3__77->GetXaxis()->SetRange(1,50);
   _QuadJet_DoubleTag_pt_jet3__77->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet3__77->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet3__77->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet3__77->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_pt_jet3__77->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet3__77->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet3__77->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet3__77->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet3__77->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet3__77->Draw("HIST");
   pt_jet3_2016_QuadJet_DoubleTag_16->Modified();
   pt_jet3_2016_QuadJet_DoubleTag_16->cd();
   pt_jet3_2016_QuadJet_DoubleTag_16->SetSelected(pt_jet3_2016_QuadJet_DoubleTag_16);
}
