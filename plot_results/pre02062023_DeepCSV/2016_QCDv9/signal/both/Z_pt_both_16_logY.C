#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_both_16_logY()
{
//=========Macro generated from canvas: Z_pt_both_16/Z_pt_both_16
//=========  (Wed Jan 18 11:42:14 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_both_16 = new TCanvas("Z_pt_both_16", "Z_pt_both_16",0,0,600,600);
   Z_pt_both_16->SetHighLightColor(2);
   Z_pt_both_16->Range(37.97653,0.4919532,1705.96,2.770295);
   Z_pt_both_16->SetFillColor(0);
   Z_pt_both_16->SetFillStyle(4000);
   Z_pt_both_16->SetBorderMode(0);
   Z_pt_both_16->SetBorderSize(2);
   Z_pt_both_16->SetLogy();
   Z_pt_both_16->SetLeftMargin(0.15709);
   Z_pt_both_16->SetRightMargin(0.1234783);
   Z_pt_both_16->SetBottomMargin(0.12);
   Z_pt_both_16->SetFrameFillStyle(1000);
   Z_pt_both_16->SetFrameBorderMode(0);
   Z_pt_both_16->SetFrameFillStyle(1000);
   Z_pt_both_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(271.0291);
   
   TH1F *st_stack_137 = new TH1F("st_stack_137","",40,0,2000);
   st_stack_137->SetMinimum(5.825781);
   st_stack_137->SetMaximum(348.7069);
   st_stack_137->SetDirectory(0);
   st_stack_137->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_137->SetLineColor(ci);
   st_stack_137->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_137->GetXaxis()->SetRange(7,30);
   st_stack_137->GetXaxis()->SetLabelFont(42);
   st_stack_137->GetXaxis()->SetTitleOffset(1);
   st_stack_137->GetXaxis()->SetTitleFont(42);
   st_stack_137->GetYaxis()->SetTitle("Events/50.0");
   st_stack_137->GetYaxis()->SetLabelFont(42);
   st_stack_137->GetYaxis()->SetTitleSize(0.037);
   st_stack_137->GetYaxis()->SetTitleFont(42);
   st_stack_137->GetZaxis()->SetLabelFont(42);
   st_stack_137->GetZaxis()->SetTitleOffset(1);
   st_stack_137->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_137);
   
   
   TH1D *VbbHcc_both_Z_pt_stack_1 = new TH1D("VbbHcc_both_Z_pt_stack_1","",40,0,2000);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(1,1.461522);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(2,2.710291);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(3,1.689472);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(4,0.7724736);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(5,0.3930402);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(6,0.1853178);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(7,0.1186537);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(8,0.08532943);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(9,0.0340511);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(10,0.01595305);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(11,0.007911005);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(12,0.007931824);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(13,0.003272536);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(14,0.003035563);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(16,0.001514166);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(17,0.001546166);
   VbbHcc_both_Z_pt_stack_1->SetBinContent(18,0.00316729);
   VbbHcc_both_Z_pt_stack_1->SetBinError(1,0.04768417);
   VbbHcc_both_Z_pt_stack_1->SetBinError(2,0.06525003);
   VbbHcc_both_Z_pt_stack_1->SetBinError(3,0.05108641);
   VbbHcc_both_Z_pt_stack_1->SetBinError(4,0.03477468);
   VbbHcc_both_Z_pt_stack_1->SetBinError(5,0.02465085);
   VbbHcc_both_Z_pt_stack_1->SetBinError(6,0.01675192);
   VbbHcc_both_Z_pt_stack_1->SetBinError(7,0.01339685);
   VbbHcc_both_Z_pt_stack_1->SetBinError(8,0.01141463);
   VbbHcc_both_Z_pt_stack_1->SetBinError(9,0.007144565);
   VbbHcc_both_Z_pt_stack_1->SetBinError(10,0.004899062);
   VbbHcc_both_Z_pt_stack_1->SetBinError(11,0.003494081);
   VbbHcc_both_Z_pt_stack_1->SetBinError(12,0.003551226);
   VbbHcc_both_Z_pt_stack_1->SetBinError(13,0.001970781);
   VbbHcc_both_Z_pt_stack_1->SetBinError(14,0.0021465);
   VbbHcc_both_Z_pt_stack_1->SetBinError(16,0.001514166);
   VbbHcc_both_Z_pt_stack_1->SetBinError(17,0.001545188);
   VbbHcc_both_Z_pt_stack_1->SetBinError(18,0.002240273);
   VbbHcc_both_Z_pt_stack_1->SetEntries(5476);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_both_Z_pt_stack_2 = new TH1D("VbbHcc_both_Z_pt_stack_2","",40,0,2000);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(1,0.2671306);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(2,0.6882973);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(3,0.7480112);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(4,0.5057387);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(5,0.2609613);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(6,0.1488759);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(7,0.08501315);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(8,0.05213332);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(9,0.02812334);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(10,0.01695894);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(11,0.01113805);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(12,0.007634336);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(13,0.006606082);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(14,0.00466929);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(15,0.003319705);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(16,0.001096965);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(17,0.002242456);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(18,0.001985655);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(19,0.001673236);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(20,0.0005374697);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(21,0.0003634463);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(22,0.0002012167);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(23,0.0007681547);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(24,0.000206937);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(25,0.0007468899);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(26,0.0002197336);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(27,0.0001275402);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(33,0.0001931004);
   VbbHcc_both_Z_pt_stack_2->SetBinContent(35,0.0001892237);
   VbbHcc_both_Z_pt_stack_2->SetBinError(1,0.00709919);
   VbbHcc_both_Z_pt_stack_2->SetBinError(2,0.01140594);
   VbbHcc_both_Z_pt_stack_2->SetBinError(3,0.01191146);
   VbbHcc_both_Z_pt_stack_2->SetBinError(4,0.009786348);
   VbbHcc_both_Z_pt_stack_2->SetBinError(5,0.007009584);
   VbbHcc_both_Z_pt_stack_2->SetBinError(6,0.005293901);
   VbbHcc_both_Z_pt_stack_2->SetBinError(7,0.003998888);
   VbbHcc_both_Z_pt_stack_2->SetBinError(8,0.003128217);
   VbbHcc_both_Z_pt_stack_2->SetBinError(9,0.002304079);
   VbbHcc_both_Z_pt_stack_2->SetBinError(10,0.001785437);
   VbbHcc_both_Z_pt_stack_2->SetBinError(11,0.001457826);
   VbbHcc_both_Z_pt_stack_2->SetBinError(12,0.001188967);
   VbbHcc_both_Z_pt_stack_2->SetBinError(13,0.001113519);
   VbbHcc_both_Z_pt_stack_2->SetBinError(14,0.000942998);
   VbbHcc_both_Z_pt_stack_2->SetBinError(15,0.000806211);
   VbbHcc_both_Z_pt_stack_2->SetBinError(16,0.0004493295);
   VbbHcc_both_Z_pt_stack_2->SetBinError(17,0.0006505429);
   VbbHcc_both_Z_pt_stack_2->SetBinError(18,0.0006284071);
   VbbHcc_both_Z_pt_stack_2->SetBinError(19,0.0005644915);
   VbbHcc_both_Z_pt_stack_2->SetBinError(20,0.000310582);
   VbbHcc_both_Z_pt_stack_2->SetBinError(21,0.0002572031);
   VbbHcc_both_Z_pt_stack_2->SetBinError(22,0.0002012167);
   VbbHcc_both_Z_pt_stack_2->SetBinError(23,0.0003849474);
   VbbHcc_both_Z_pt_stack_2->SetBinError(24,0.0001878671);
   VbbHcc_both_Z_pt_stack_2->SetBinError(25,0.0003543166);
   VbbHcc_both_Z_pt_stack_2->SetBinError(26,0.000164479);
   VbbHcc_both_Z_pt_stack_2->SetBinError(27,0.0001275402);
   VbbHcc_both_Z_pt_stack_2->SetBinError(33,0.0001931004);
   VbbHcc_both_Z_pt_stack_2->SetBinError(35,0.0001892237);
   VbbHcc_both_Z_pt_stack_2->SetEntries(16360);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_both_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_both_16->Modified();
   Z_pt_both_16->cd();
   Z_pt_both_16->SetSelected(Z_pt_both_16);
}
