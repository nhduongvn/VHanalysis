#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_algo_17()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_algo_17/Z_jetmass_noJEC_algo_17
//=========  (Mon Mar 27 11:09:52 2023) by ROOT version 6.26/06
   TCanvas *Z_jetmass_noJEC_algo_17 = new TCanvas("Z_jetmass_noJEC_algo_17", "Z_jetmass_noJEC_algo_17",0,0,600,600);
   Z_jetmass_noJEC_algo_17->SetHighLightColor(2);
   Z_jetmass_noJEC_algo_17->Range(-65.50587,-0.02262963,351.4899,0.1659506);
   Z_jetmass_noJEC_algo_17->SetFillColor(0);
   Z_jetmass_noJEC_algo_17->SetFillStyle(4000);
   Z_jetmass_noJEC_algo_17->SetBorderMode(0);
   Z_jetmass_noJEC_algo_17->SetBorderSize(2);
   Z_jetmass_noJEC_algo_17->SetLeftMargin(0.15709);
   Z_jetmass_noJEC_algo_17->SetRightMargin(0.1234783);
   Z_jetmass_noJEC_algo_17->SetBottomMargin(0.12);
   Z_jetmass_noJEC_algo_17->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_algo_17->SetFrameBorderMode(0);
   Z_jetmass_noJEC_algo_17->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(0.1470926);
   
   TH1F *st_stack_186 = new TH1F("st_stack_186","",150,0,300);
   st_stack_186->SetMinimum(0);
   st_stack_186->SetMaximum(0.1470926);
   st_stack_186->SetDirectory(0);
   st_stack_186->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_186->SetLineColor(ci);
   st_stack_186->GetXaxis()->SetTitle("b-jet mass [GeV]");
   st_stack_186->GetXaxis()->SetRange(1,150);
   st_stack_186->GetXaxis()->SetLabelFont(42);
   st_stack_186->GetXaxis()->SetTitleOffset(1);
   st_stack_186->GetXaxis()->SetTitleFont(42);
   st_stack_186->GetYaxis()->SetTitle("Event/2.0 GeV");
   st_stack_186->GetYaxis()->SetLabelFont(42);
   st_stack_186->GetYaxis()->SetTitleSize(0.037);
   st_stack_186->GetYaxis()->SetTitleFont(42);
   st_stack_186->GetZaxis()->SetLabelFont(42);
   st_stack_186->GetZaxis()->SetTitleOffset(1);
   st_stack_186->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_186);
   
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC_stack_1 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC_stack_1","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(3,0.006693417);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(4,0.03133938);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(5,0.07807706);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(6,0.08600698);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(7,0.09228829);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(8,0.07558847);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(9,0.06711411);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(10,0.02853799);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(11,0.03424206);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(12,0.01018298);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(13,0.01236922);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(14,0.01048955);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(15,0.007068001);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(16,0.004071023);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(18,0.003226902);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(21,0.001753361);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinContent(26,0.002014015);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(3,0.004382965);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(4,0.007975611);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(5,0.01299501);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(6,0.01285501);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(7,0.01310518);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(8,0.01187557);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(9,0.01121591);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(10,0.007216836);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(11,0.007896889);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(12,0.004379576);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(13,0.005089159);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(14,0.004355319);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(15,0.003535597);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(16,0.002352669);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(18,0.00364449);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(21,0.001753361);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetBinError(26,0.002014015);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetEntries(331);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_noJEC_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_jetmass_noJEC_stack_2 = new TH1D("VbbHcc_algo_Z_jetmass_noJEC_stack_2","",150,0,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(2,0.0002638244);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(3,0.001250313);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(4,0.009060399);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(5,0.026229);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(6,0.03304491);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(7,0.02979855);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(8,0.02945096);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(9,0.0199962);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(10,0.01500947);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(11,0.01244143);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(12,0.007615792);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(13,0.005067697);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(14,0.00331094);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(15,0.00244857);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(16,0.0006499506);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(17,0.000916137);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(18,0.0009629864);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(19,0.001007546);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(20,0.0004989169);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(26,0.000131552);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinContent(28,0.0002615845);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(2,0.0002638244);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(3,0.0005703345);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(4,0.001466266);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(5,0.002511689);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(6,0.002817799);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(7,0.00266633);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(8,0.002643361);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(9,0.002158146);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(10,0.001879551);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(11,0.001766285);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(12,0.001379995);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(13,0.001102412);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(14,0.0008997301);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(15,0.0007819085);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(16,0.0003325364);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(17,0.0004816416);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(18,0.0004818918);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(19,0.0005136756);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(20,0.0003531339);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(26,0.000131552);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetBinError(28,0.0002615845);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetEntries(869);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->SetFillColor(ci);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetRange(1,300);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_jetmass_noJEC_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_jetmass_noJEC_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_noJEC_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_Z_jetmass_noJEC_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_algo_17->Modified();
   Z_jetmass_noJEC_algo_17->cd();
   Z_jetmass_noJEC_algo_17->SetSelected(Z_jetmass_noJEC_algo_17);
}
