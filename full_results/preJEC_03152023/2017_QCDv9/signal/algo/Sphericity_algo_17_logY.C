#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_algo_17_logY()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Mar  9 13:08:26 2023) by ROOT version 6.26/06
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2183529,-4.20069,1.171633,-0.3545366);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetFillStyle(4000);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLogy();
   Sphericity_algo_17->SetLeftMargin(0.15709);
   Sphericity_algo_17->SetRightMargin(0.1234783);
   Sphericity_algo_17->SetBottomMargin(0.12);
   Sphericity_algo_17->SetFrameFillStyle(1000);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameFillStyle(1000);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1);
   st->SetMaximum(0.210833);
   
   TH1F *st_stack_122 = new TH1F("st_stack_122","",25,0,1);
   st_stack_122->SetMinimum(1.510644);
   st_stack_122->SetMaximum(0.1823258);
   st_stack_122->SetDirectory(0);
   st_stack_122->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_122->SetLineColor(ci);
   st_stack_122->GetXaxis()->SetTitle("Sphericity");
   st_stack_122->GetXaxis()->SetRange(1,25);
   st_stack_122->GetXaxis()->SetLabelFont(42);
   st_stack_122->GetXaxis()->SetTitleOffset(1);
   st_stack_122->GetXaxis()->SetTitleFont(42);
   st_stack_122->GetYaxis()->SetTitle("Event/0.04");
   st_stack_122->GetYaxis()->SetLabelFont(42);
   st_stack_122->GetYaxis()->SetTitleSize(0.037);
   st_stack_122->GetYaxis()->SetTitleFont(42);
   st_stack_122->GetZaxis()->SetLabelFont(42);
   st_stack_122->GetZaxis()->SetTitleOffset(1);
   st_stack_122->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_122);
   
   
   TH1D *VbbHcc_algo_Sphericity_stack_1 = new TH1D("VbbHcc_algo_Sphericity_stack_1","",25,0,1);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(1,0.01209434);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(2,0.04187032);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(3,0.1124762);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(4,0.1197391);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(5,0.1181);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(6,0.1161499);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(7,0.1197473);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(8,0.1073489);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(9,0.124757);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(10,0.1057567);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(11,0.1107072);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(12,0.08760269);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(13,0.06913847);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(14,0.06339153);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(15,0.06963258);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(16,0.03617206);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(17,0.04721515);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(18,0.03455908);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(19,0.02709103);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(20,0.01331805);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(21,0.005944846);
   VbbHcc_algo_Sphericity_stack_1->SetBinContent(22,0.002002576);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(1,0.004704198);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(2,0.009323531);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(3,0.01438522);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(4,0.01512615);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(5,0.0148752);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(6,0.01562059);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(7,0.01481084);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(8,0.01444913);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(9,0.0150751);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(10,0.01379535);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(11,0.01480073);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(12,0.01262997);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(13,0.01198496);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(14,0.01079299);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(15,0.01150925);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(16,0.00871808);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(17,0.009389859);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(18,0.007924609);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(19,0.00727486);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(20,0.005084045);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(21,0.003432816);
   VbbHcc_algo_Sphericity_stack_1->SetBinError(22,0.002002576);
   VbbHcc_algo_Sphericity_stack_1->SetEntries(919);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_1,"");
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,0.003439016);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,0.017489);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,0.03126281);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,0.04422994);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,0.04522253);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,0.04779896);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,0.04852972);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,0.03914832);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,0.05023432);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,0.03724087);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,0.03890705);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,0.03058955);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,0.02681925);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,0.02812209);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,0.02021737);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,0.01288376);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,0.01431387);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,0.01108558);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.006845242);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.001454649);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,0.001331361);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(22,0.0002639519);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,0.0008834813);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,0.002037184);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,0.002695059);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,0.003239563);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,0.003288292);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,0.003412562);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,0.003415784);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,0.003085413);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,0.003513563);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,0.002995495);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.003105583);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,0.002715995);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.002537206);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.002624212);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.002226222);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.001730312);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.001872793);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.001631878);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.001291734);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.0006008995);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,0.0005552175);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(22,0.0002639519);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(2405);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Sphericity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Sphericity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Sphericity_stack_1","ZHcc","F");

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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
