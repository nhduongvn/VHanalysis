#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTag_18_ref/pt_jet0_2018_QuadJet_noTag_18_ref
//=========  (Thu Apr 27 10:20:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_noTag_18_ref = new TCanvas("pt_jet0_2018_QuadJet_noTag_18_ref", "pt_jet0_2018_QuadJet_noTag_18_ref",0,0,600,600);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_noTag_18_ref->Range(-100,1.301111,566.6667,5.532756);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetLogy();
   pt_jet0_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_pt_jet0_ref__6 = new TH1D("_QuadJet_noTag_pt_jet0_ref__6","",50,0,500);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(5,106);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(6,6454);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(7,24702);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(8,44911);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(9,59316);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(10,66339);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(11,67927);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(12,65745);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(13,61713);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(14,57465);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(15,52087);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(16,47051);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(17,42631);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(18,37628);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(19,33331);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(20,29383);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(21,26182);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(22,22599);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(23,19990);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(24,17970);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(25,15728);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(26,13932);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(27,12577);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(28,11039);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(29,9805);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(30,8655);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(31,7911);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(32,6947);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(33,6136);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(34,5515);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(35,5096);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(36,4491);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(37,3939);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(38,3625);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(39,3339);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(40,2962);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(41,2661);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(42,2438);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(43,2275);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(44,2007);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(45,1815);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(46,1663);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(47,1512);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(48,1348);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(49,1231);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(50,1146);
   _QuadJet_noTag_pt_jet0_ref__6->SetBinContent(51,12382);
   _QuadJet_noTag_pt_jet0_ref__6->SetEntries(935705);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_pt_jet0_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 935705 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  162.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  80.76");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_pt_jet0_ref__6->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_pt_jet0_ref__6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_pt_jet0_ref__6->SetLineColor(ci);
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet0_ref__6->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_pt_jet0_ref__6->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_pt_jet0_ref__6->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_pt_jet0_ref__6->Draw("HIST");
   pt_jet0_2018_QuadJet_noTag_18_ref->Modified();
   pt_jet0_2018_QuadJet_noTag_18_ref->cd();
   pt_jet0_2018_QuadJet_noTag_18_ref->SetSelected(pt_jet0_2018_QuadJet_noTag_18_ref);
}
