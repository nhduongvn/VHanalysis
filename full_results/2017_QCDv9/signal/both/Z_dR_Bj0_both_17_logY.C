#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_17/Z_dR_Bj0_both_17
//=========  (Tue Feb 14 10:43:08 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_Bj0_both_17 = new TCanvas("Z_dR_Bj0_both_17", "Z_dR_Bj0_both_17",0,0,600,600);
   Z_dR_Bj0_both_17->SetHighLightColor(2);
   Z_dR_Bj0_both_17->Range(-1.310117,0.4466466,7.029799,2.950231);
   Z_dR_Bj0_both_17->SetFillColor(0);
   Z_dR_Bj0_both_17->SetFillStyle(4000);
   Z_dR_Bj0_both_17->SetBorderMode(0);
   Z_dR_Bj0_both_17->SetBorderSize(2);
   Z_dR_Bj0_both_17->SetLogy();
   Z_dR_Bj0_both_17->SetLeftMargin(0.15709);
   Z_dR_Bj0_both_17->SetRightMargin(0.1234783);
   Z_dR_Bj0_both_17->SetBottomMargin(0.12);
   Z_dR_Bj0_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_17->SetFrameBorderMode(0);
   Z_dR_Bj0_both_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_both_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(380.6963);
   
   TH1F *st_stack_178 = new TH1F("st_stack_178","",30,0,6);
   st_stack_178->SetMinimum(5.585689);
   st_stack_178->SetMaximum(501.0404);
   st_stack_178->SetDirectory(0);
   st_stack_178->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_178->SetLineColor(ci);
   st_stack_178->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   st_stack_178->GetXaxis()->SetRange(1,30);
   st_stack_178->GetXaxis()->SetLabelFont(42);
   st_stack_178->GetXaxis()->SetTitleOffset(1);
   st_stack_178->GetXaxis()->SetTitleFont(42);
   st_stack_178->GetYaxis()->SetTitle("Events/0.2");
   st_stack_178->GetYaxis()->SetLabelFont(42);
   st_stack_178->GetYaxis()->SetTitleSize(0.037);
   st_stack_178->GetYaxis()->SetTitleFont(42);
   st_stack_178->GetZaxis()->SetLabelFont(42);
   st_stack_178->GetZaxis()->SetTitleOffset(1);
   st_stack_178->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_178);
   
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_1 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_1","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(1,0.6747672);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(2,2.594772);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(3,2.77018);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(4,2.433587);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(5,1.782523);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(6,1.291065);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(7,0.9592124);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(8,0.6716067);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(9,0.5673102);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(10,0.4077048);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(11,0.333433);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(12,0.2939267);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(13,0.2417784);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(14,0.2117537);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(15,0.2433587);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(16,0.1880499);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(17,0.1153583);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(18,0.07585205);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(19,0.04266678);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(20,0.03792603);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(21,0.006321005);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(22,0.009481507);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(23,0.009481507);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(24,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(25,0.006321005);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(27,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(28,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinContent(29,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(1,0.03265428);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(2,0.0640343);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(3,0.06616329);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(4,0.06201353);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(5,0.05307386);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(6,0.04516865);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(7,0.03893323);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(8,0.03257771);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(9,0.02994149);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(10,0.02538259);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(11,0.02295447);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(12,0.02155175);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(13,0.01954663);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(14,0.01829273);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(15,0.0196104);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(16,0.0172385);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(17,0.01350167);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(18,0.0109483);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(19,0.008211226);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(20,0.007741618);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(21,0.003160502);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(22,0.003870809);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(23,0.003870809);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(24,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(25,0.003160502);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(27,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(28,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetBinError(29,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_1->SetEntries(10111);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_1,"");
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_2 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_2","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(1,0.2781916);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(2,1.026402);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(3,1.036783);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(4,0.7754071);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(5,0.4818527);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(6,0.2835893);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(7,0.1912048);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(8,0.1488533);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(9,0.1145983);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(10,0.1056713);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(11,0.08594874);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(12,0.0770217);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(13,0.06892508);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(14,0.06934029);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(15,0.05667634);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(16,0.05958282);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(17,0.03259409);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(18,0.01598564);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(19,0.01204113);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(20,0.007889015);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(21,0.004982536);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(22,0.004567324);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(23,0.001868451);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(24,0.001038028);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(25,0.0004152113);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(26,0.000622817);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(27,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinContent(31,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(1,0.007599615);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(2,0.0145975);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(3,0.01467113);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(4,0.01268775);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(5,0.01000177);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(6,0.007672988);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(7,0.006300413);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(8,0.005559027);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(9,0.004877628);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(10,0.004683797);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(11,0.00422415);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(12,0.003998767);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(13,0.003782755);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(14,0.003794132);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(15,0.003430208);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(16,0.003517063);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(17,0.002601291);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(18,0.001821732);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(19,0.001581078);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(20,0.001279767);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(21,0.001017056);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(22,0.0009737568);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(23,0.000622817);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(24,0.0004642204);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(25,0.0002935987);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(26,0.0003595835);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(27,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetBinError(31,0.0002076057);
   VbbHcc_both_Z_dR_Bj0_stack_2->SetEntries(23807);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_dR_Bj0_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_dR_Bj0_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_dR_Bj0_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_both_17->Modified();
   Z_dR_Bj0_both_17->cd();
   Z_dR_Bj0_both_17->SetSelected(Z_dR_Bj0_both_17);
}
