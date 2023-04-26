#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_QuadJet_TripleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_QuadJet_TripleTag_16/pt_jet0_2016_QuadJet_TripleTag_16
//=========  (Wed Apr 26 16:41:40 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_QuadJet_TripleTag_16 = new TCanvas("pt_jet0_2016_QuadJet_TripleTag_16", "pt_jet0_2016_QuadJet_TripleTag_16",0,0,600,600);
   pt_jet0_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   pt_jet0_2016_QuadJet_TripleTag_16->Range(-100,-0.8311026,566.6667,4.469623);
   pt_jet0_2016_QuadJet_TripleTag_16->SetFillColor(0);
   pt_jet0_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   pt_jet0_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   pt_jet0_2016_QuadJet_TripleTag_16->SetLogy();
   pt_jet0_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15);
   pt_jet0_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   pt_jet0_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet0__2 = new TH1D("_QuadJet_TripleTag_pt_jet0__2","",50,0,500);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(5,1);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(6,79);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(7,713);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(8,1785);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(9,3161);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(10,3983);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(11,4336);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(12,4492);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(13,4592);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(14,4214);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(15,4126);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(16,3712);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(17,3322);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(18,3073);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(19,2743);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(20,2347);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(21,2148);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(22,1895);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(23,1736);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(24,1517);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(25,1406);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(26,1179);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(27,1058);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(28,997);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(29,887);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(30,810);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(31,728);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(32,630);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(33,550);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(34,536);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(35,458);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(36,434);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(37,414);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(38,351);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(39,333);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(40,285);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(41,234);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(42,235);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(43,231);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(44,214);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(45,195);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(46,177);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(47,143);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(48,154);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(49,131);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(50,113);
   _QuadJet_TripleTag_pt_jet0__2->SetBinContent(51,1430);
   _QuadJet_TripleTag_pt_jet0__2->SetEntries(68288);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 68288  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  177.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  84.59");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet0__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet0__2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet0__2->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet0__2->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet0__2->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet0__2->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet0__2->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet0__2->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet0__2->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet0__2->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet0__2->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet0__2->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet0__2->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet0__2->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet0__2->Draw("HIST");
   pt_jet0_2016_QuadJet_TripleTag_16->Modified();
   pt_jet0_2016_QuadJet_TripleTag_16->cd();
   pt_jet0_2016_QuadJet_TripleTag_16->SetSelected(pt_jet0_2016_QuadJet_TripleTag_16);
}
