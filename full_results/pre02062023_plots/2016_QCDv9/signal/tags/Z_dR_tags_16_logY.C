#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_16_logY()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Wed Jan 18 11:42:13 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.310117,-0.1389537,7.029799,1.018994);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetFillStyle(4000);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
   Z_dR_tags_16->SetLogy();
   Z_dR_tags_16->SetLeftMargin(0.15709);
   Z_dR_tags_16->SetRightMargin(0.1234783);
   Z_dR_tags_16->SetBottomMargin(0.12);
   Z_dR_tags_16->SetFrameFillStyle(1000);
   Z_dR_tags_16->SetFrameBorderMode(0);
   Z_dR_tags_16->SetFrameFillStyle(1000);
   Z_dR_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   st->SetMaximum(86.01894);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",30,0,6);
   st_stack_17->SetMinimum(-3.297389e+09);
   st_stack_17->SetMaximum(-52.7366);
   st_stack_17->SetDirectory(0);
   st_stack_17->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_17->SetLineColor(ci);
   st_stack_17->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_17->GetXaxis()->SetRange(1,30);
   st_stack_17->GetXaxis()->SetLabelFont(42);
   st_stack_17->GetXaxis()->SetTitleOffset(1);
   st_stack_17->GetXaxis()->SetTitleFont(42);
   st_stack_17->GetYaxis()->SetTitle("Events/0.2");
   st_stack_17->GetYaxis()->SetLabelFont(42);
   st_stack_17->GetYaxis()->SetTitleSize(0.037);
   st_stack_17->GetYaxis()->SetTitleFont(42);
   st_stack_17->GetZaxis()->SetLabelFont(42);
   st_stack_17->GetZaxis()->SetTitleOffset(1);
   st_stack_17->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_17);
   
   
   TH1D *VbbHcc_tags_Z_dR_stack_1 = new TH1D("VbbHcc_tags_Z_dR_stack_1","",30,0,6);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,0.2134041);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,0.3728125);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,0.5067703);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,0.5660051);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,0.5451205);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,0.5425041);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,0.4784714);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,0.3454873);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,0.3444041);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,0.415455);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,0.4005932);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,0.3962374);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,0.4244039);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,0.4110244);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,0.1455467);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,0.07662237);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,0.03697755);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,0.02587121);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,0.01110998);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,0.0109225);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(24,0.003143403);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,0.003014248);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(26,0.001493284);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,0.01804846);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,0.02426685);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,0.02834587);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,0.02983447);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,0.02907028);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,0.02893568);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,0.02733167);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,0.02382345);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,0.0229725);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,0.02537127);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,0.02533629);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,0.02466478);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,0.02537203);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,0.02541716);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,0.01517795);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,0.01083082);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,0.007391421);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,0.006294941);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,0.004203356);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,0.003909185);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(24,0.002227248);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,0.002131957);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(26,0.001493284);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(4581);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_dR_stack_2 = new TH1D("VbbHcc_tags_Z_dR_stack_2","",30,0,6);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,0.1146271);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,0.2048355);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,0.2806691);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,0.2941843);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,0.2377583);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,0.1734336);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,0.1269619);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,0.1135072);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,0.09772652);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,0.1079651);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,0.1019751);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,0.1105239);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,0.1165455);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,0.1193402);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,0.05563496);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,0.02839659);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,0.01711331);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,0.01326033);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,0.008109512);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,0.003885946);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,0.002719905);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,0.001105564);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,0.0003323663);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(26,4.000765e-05);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(27,0.000131537);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(29,0.00018361);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,0.004669848);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,0.006217628);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,0.007308352);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,0.007479033);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,0.00671663);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,0.005737492);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,0.004900105);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,0.004629889);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,0.004281522);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,0.00452172);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,0.004382031);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,0.004579179);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,0.004700806);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,0.004738911);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,0.003255674);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,0.002310202);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,0.001788185);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,0.001600416);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,0.001231492);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,0.0008555199);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,0.0006851908);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,0.0004446502);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,0.0002371524);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(26,4.000765e-05);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(27,0.000131537);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(29,0.00018361);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(13340);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_dR_stack_1","ZHcc","F");

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
   Z_dR_tags_16->Modified();
   Z_dR_tags_16->cd();
   Z_dR_tags_16->SetSelected(Z_dR_tags_16);
}
