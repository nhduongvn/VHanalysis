#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_16/Z_dR_Bj0_tags_16
//=========  (Thu Mar  9 12:19:50 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_tags_16 = new TCanvas("Z_dR_Bj0_tags_16", "Z_dR_Bj0_tags_16",0,0,600,600);
   Z_dR_Bj0_tags_16->SetHighLightColor(2);
   Z_dR_Bj0_tags_16->Range(-1.310117,-0.1334602,7.029799,0.9787084);
   Z_dR_Bj0_tags_16->SetFillColor(0);
   Z_dR_Bj0_tags_16->SetFillStyle(4000);
   Z_dR_Bj0_tags_16->SetBorderMode(0);
   Z_dR_Bj0_tags_16->SetBorderSize(2);
   Z_dR_Bj0_tags_16->SetLogy();
   Z_dR_Bj0_tags_16->SetLeftMargin(0.15709);
   Z_dR_Bj0_tags_16->SetRightMargin(0.1234783);
   Z_dR_Bj0_tags_16->SetBottomMargin(0.12);
   Z_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_49 = new TH1F("st_stack_49","",30,0,6);
   st_stack_49->SetMinimum(-2.474352e+09);
   st_stack_49->SetMaximum(-0.8398845);
   st_stack_49->SetDirectory(0);
   st_stack_49->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_49->SetLineColor(ci);
   st_stack_49->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_49->GetXaxis()->SetRange(1,30);
   st_stack_49->GetXaxis()->SetLabelFont(42);
   st_stack_49->GetXaxis()->SetTitleOffset(1);
   st_stack_49->GetXaxis()->SetTitleFont(42);
   st_stack_49->GetYaxis()->SetTitle("Event/0.2");
   st_stack_49->GetYaxis()->SetLabelFont(42);
   st_stack_49->GetYaxis()->SetTitleSize(0.037);
   st_stack_49->GetYaxis()->SetTitleFont(42);
   st_stack_49->GetZaxis()->SetLabelFont(42);
   st_stack_49->GetZaxis()->SetTitleOffset(1);
   st_stack_49->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_49);
   
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(1,0.1563452);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(2,0.534662);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(3,0.5558941);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(4,0.380247);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(5,0.2200414);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(6,0.1602056);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(7,0.1003698);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(8,0.08106788);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(9,0.07527732);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(10,0.05790563);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(11,0.03667357);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(12,0.05018488);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(13,0.03474338);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(14,0.04053394);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(15,0.04825469);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(16,0.03281319);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(17,0.02123206);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(18,0.007720751);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(19,0.009650938);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(20,0.003860375);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(21,0.001930188);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(22,0.001930188);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinContent(29,0.001930188);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(1,0.01737169);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(2,0.03212473);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(3,0.03275637);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(4,0.02709148);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(5,0.02060877);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(6,0.01758485);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(7,0.01391878);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(8,0.01250905);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(9,0.01205402);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(10,0.01057207);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(11,0.008413493);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(12,0.009842065);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(13,0.008189093);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(14,0.008845231);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(15,0.009650938);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(16,0.007958368);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(17,0.006401708);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(18,0.003860375);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(19,0.004316031);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(20,0.002729698);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(21,0.001930188);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(22,0.001930188);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetBinError(29,0.001930188);
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetEntries(1354);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_tags_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(1,0.0516876);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(2,0.2481005);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(3,0.2702883);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(4,0.1643918);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(5,0.08547365);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(6,0.04790558);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(7,0.03882874);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(8,0.02874335);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(9,0.02269212);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(10,0.02294425);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(11,0.02143145);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(12,0.01563235);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(13,0.01613662);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(14,0.01159819);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(15,0.01512808);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(16,0.01134606);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(17,0.007311905);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(18,0.003529885);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(19,0.001764943);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(20,0.002269212);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(21,0.001260673);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(22,0.0002521346);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(24,0.0007564039);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinContent(27,0.0002521346);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(1,0.003610019);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(2,0.007909155);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(3,0.008255244);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(4,0.006438079);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(5,0.004642291);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(6,0.003475436);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(7,0.003128909);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(8,0.002692061);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(9,0.002391959);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(10,0.002405211);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(11,0.002324567);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(12,0.00198531);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(13,0.002017077);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(14,0.00171006);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(15,0.001953027);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(16,0.001691371);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(17,0.001357787);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(18,0.0009434015);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(19,0.0006670856);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(20,0.0007564039);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(21,0.0005637902);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(22,0.0002521346);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(24,0.00043671);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetBinError(27,0.0002521346);
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetEntries(4322);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_Bj0_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_tags_16->Modified();
   Z_dR_Bj0_tags_16->cd();
   Z_dR_Bj0_tags_16->SetSelected(Z_dR_Bj0_tags_16);
}
