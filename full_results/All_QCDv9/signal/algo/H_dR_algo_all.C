#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_all()
{
//=========Macro generated from canvas: H_dR_algo_all/H_dR_algo_all
//=========  (Mon Dec 19 11:11:22 2022) by ROOT version 6.26/06
   TCanvas *H_dR_algo_all = new TCanvas("H_dR_algo_all", "H_dR_algo_all",0,0,600,600);
   H_dR_algo_all->SetHighLightColor(2);
   H_dR_algo_all->Range(-1.353788,-0.2753535,7.264125,2.019259);
   H_dR_algo_all->SetFillColor(0);
   H_dR_algo_all->SetFillStyle(4000);
   H_dR_algo_all->SetBorderMode(0);
   H_dR_algo_all->SetBorderSize(2);
   H_dR_algo_all->SetLeftMargin(0.15709);
   H_dR_algo_all->SetRightMargin(0.1234783);
   H_dR_algo_all->SetBottomMargin(0.12);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   H_dR_algo_all->SetFrameFillStyle(1000);
   H_dR_algo_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1.789798);
   
   TH1F *st_stack_80 = new TH1F("st_stack_80","",30,0,6);
   st_stack_80->SetMinimum(0);
   st_stack_80->SetMaximum(1.789798);
   st_stack_80->SetDirectory(0);
   st_stack_80->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_80->SetLineColor(ci);
   st_stack_80->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_80->GetXaxis()->SetRange(1,31);
   st_stack_80->GetXaxis()->SetLabelFont(42);
   st_stack_80->GetXaxis()->SetTitleOffset(1);
   st_stack_80->GetXaxis()->SetTitleFont(42);
   st_stack_80->GetYaxis()->SetTitle("Events/0.2");
   st_stack_80->GetYaxis()->SetLabelFont(42);
   st_stack_80->GetYaxis()->SetTitleSize(0.037);
   st_stack_80->GetYaxis()->SetTitleFont(42);
   st_stack_80->GetZaxis()->SetLabelFont(42);
   st_stack_80->GetZaxis()->SetTitleOffset(1);
   st_stack_80->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_80);
   
   
   TH1D *VbbHcc_algo_H_dR_all_stack_1 = new TH1D("VbbHcc_algo_H_dR_all_stack_1","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(3,0.07387255);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(4,0.3126139);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(5,0.2756813);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(6,0.4852976);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(7,0.7927937);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(8,0.7642931);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(9,0.9361804);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(10,0.8675911);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(11,0.7629184);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(12,0.5351136);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(13,0.4254116);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(14,0.3640974);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(15,0.2242159);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(16,0.2090985);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(17,0.06400714);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(18,0.02800243);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(19,0.0117989);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(20,0.007535205);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(21,0.007214736);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(22,0.00430797);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(23,0.00192394);
   VbbHcc_algo_H_dR_all_stack_1->SetBinContent(27,0.001436258);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(3,0.01248232);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(4,0.02604573);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(5,0.02446265);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(6,0.03251376);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(7,0.0411144);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(8,0.04033375);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(9,0.04595148);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(10,0.04416757);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(11,0.04073107);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(12,0.03458866);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(13,0.0300202);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(14,0.02797014);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(15,0.02167229);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(16,0.02228436);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(17,0.01091716);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(18,0.007150553);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(19,0.004454704);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(20,0.003920168);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(21,0.004174966);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(22,0.002599115);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(23,0.00192394);
   VbbHcc_algo_H_dR_all_stack_1->SetBinError(27,0.001436258);
   VbbHcc_algo_H_dR_all_stack_1->SetEntries(4155);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_1->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_1,"");
   
   TH1D *VbbHcc_algo_H_dR_all_stack_2 = new TH1D("VbbHcc_algo_H_dR_all_stack_2","",30,0,6);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(3,0.02563468);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(4,0.06816832);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(5,0.09687115);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(6,0.1826068);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(7,0.2645583);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(8,0.2932284);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(9,0.257018);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(10,0.1816496);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(11,0.1270459);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(12,0.09238545);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(13,0.07428003);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(14,0.05706816);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(15,0.05715083);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(16,0.0485844);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(17,0.02216896);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(18,0.009897242);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(19,0.00819703);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(20,0.003078038);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(21,0.002277523);
   VbbHcc_algo_H_dR_all_stack_2->SetBinContent(22,0.001136881);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(3,0.003015024);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(4,0.00428234);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(5,0.005367369);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(6,0.007362328);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(7,0.008867898);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(8,0.009556222);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(9,0.008769142);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(10,0.007392997);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(11,0.006039465);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(12,0.005244784);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(13,0.004681858);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(14,0.004116619);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(15,0.004089776);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(16,0.003714535);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(17,0.002461891);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(18,0.001650888);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(19,0.001551189);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(20,0.0009799347);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(21,0.0008003778);
   VbbHcc_algo_H_dR_all_stack_2->SetBinError(22,0.0005064624);
   VbbHcc_algo_H_dR_all_stack_2->SetEntries(7690);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_H_dR_all_stack_2->SetLineColor(ci);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_H_dR_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_algo_H_dR_all_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_all->Modified();
   H_dR_algo_all->cd();
   H_dR_algo_all->SetSelected(H_dR_algo_all);
}
