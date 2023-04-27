#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_DoubleTag_16/pt_jet2_2016_QuadJet_DoubleTag_16
//=========  (Thu Apr 27 10:18:36 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_DoubleTag_16 = new TCanvas("pt_jet2_2016_QuadJet_DoubleTag_16", "pt_jet2_2016_QuadJet_DoubleTag_16",0,0,600,600);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_DoubleTag_16->Range(-100,-0.7654425,566.6667,3.878682);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetLogy();
   pt_jet2_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_pt_jet2__29 = new TH1D("_QuadJet_DoubleTag_pt_jet2__29","",50,0,500);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(5,89);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(6,970);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(7,1370);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(8,1307);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(9,943);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(10,684);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(11,507);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(12,335);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(13,248);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(14,156);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(15,124);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(16,85);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(17,55);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(18,60);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(19,29);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(20,28);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(21,33);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(22,18);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(23,11);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(24,8);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(25,6);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(26,3);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(27,5);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(28,3);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(29,4);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(30,3);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(32,2);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(33,3);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(34,1);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(37,1);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(38,1);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(41,1);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(46,1);
   _QuadJet_DoubleTag_pt_jet2__29->SetBinContent(51,2);
   _QuadJet_DoubleTag_pt_jet2__29->SetEntries(7096);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7096   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  87.29");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  33.61");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_pt_jet2__29->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_pt_jet2__29);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_pt_jet2__29->SetLineColor(ci);
   _QuadJet_DoubleTag_pt_jet2__29->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_pt_jet2__29->GetXaxis()->SetRange(1,50);
   _QuadJet_DoubleTag_pt_jet2__29->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet2__29->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet2__29->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet2__29->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_pt_jet2__29->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet2__29->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet2__29->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_pt_jet2__29->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_pt_jet2__29->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_pt_jet2__29->Draw("HIST");
   pt_jet2_2016_QuadJet_DoubleTag_16->Modified();
   pt_jet2_2016_QuadJet_DoubleTag_16->cd();
   pt_jet2_2016_QuadJet_DoubleTag_16->SetSelected(pt_jet2_2016_QuadJet_DoubleTag_16);
}
