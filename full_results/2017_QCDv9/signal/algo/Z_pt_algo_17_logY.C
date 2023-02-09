void Z_pt_algo_17_logY()
{
//=========Macro generated from canvas: Z_pt_algo_17/Z_pt_algo_17
//=========  (Thu Feb  9 09:44:32 2023) by ROOT version 6.14/09
   TCanvas *Z_pt_algo_17 = new TCanvas("Z_pt_algo_17", "Z_pt_algo_17",0,0,600,600);
   Z_pt_algo_17->SetHighLightColor(2);
   Z_pt_algo_17->Range(37.97653,0.5787098,1705.96,2.435159);
   Z_pt_algo_17->SetFillColor(0);
   Z_pt_algo_17->SetFillStyle(4000);
   Z_pt_algo_17->SetBorderMode(0);
   Z_pt_algo_17->SetBorderSize(2);
   Z_pt_algo_17->SetLogy();
   Z_pt_algo_17->SetLeftMargin(0.15709);
   Z_pt_algo_17->SetRightMargin(0.1234783);
   Z_pt_algo_17->SetBottomMargin(0.12);
   Z_pt_algo_17->SetFrameFillStyle(1000);
   Z_pt_algo_17->SetFrameBorderMode(0);
   Z_pt_algo_17->SetFrameFillStyle(1000);
   Z_pt_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(144.2034);
   
   TH1F *st_stack_74 = new TH1F("st_stack_74","",40,0,2000);
   st_stack_74->SetMinimum(6.331166);
   st_stack_74->SetMaximum(177.6291);
   st_stack_74->SetDirectory(0);
   st_stack_74->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_74->SetLineColor(ci);
   st_stack_74->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_74->GetXaxis()->SetRange(7,30);
   st_stack_74->GetXaxis()->SetLabelFont(42);
   st_stack_74->GetXaxis()->SetLabelSize(0.035);
   st_stack_74->GetXaxis()->SetTitleSize(0.035);
   st_stack_74->GetXaxis()->SetTitleFont(42);
   st_stack_74->GetYaxis()->SetTitle("Events/50.0");
   st_stack_74->GetYaxis()->SetLabelFont(42);
   st_stack_74->GetYaxis()->SetLabelSize(0.035);
   st_stack_74->GetYaxis()->SetTitleSize(0.037);
   st_stack_74->GetYaxis()->SetTitleOffset(0);
   st_stack_74->GetYaxis()->SetTitleFont(42);
   st_stack_74->GetZaxis()->SetLabelFont(42);
   st_stack_74->GetZaxis()->SetLabelSize(0.035);
   st_stack_74->GetZaxis()->SetTitleSize(0.035);
   st_stack_74->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_74);
   
   
   TH1D *VbbHcc_algo_Z_pt_stack_1 = new TH1D("VbbHcc_algo_Z_pt_stack_1","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(1,0.2620691);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(2,1.233125);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(3,1.021301);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(4,0.554202);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(5,0.3321578);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(6,0.1748466);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(7,0.07543529);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(8,0.06387295);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(9,0.01992331);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(10,0.005923637);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(11,0.005533187);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(12,0.003739981);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(13,0.001753361);
   VbbHcc_algo_Z_pt_stack_1->SetBinContent(14,0.001848645);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(1,0.02201181);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(2,0.04902184);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(3,0.04430019);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(4,0.03253801);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(5,0.02503064);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(6,0.01873494);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(7,0.01215063);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(8,0.010777);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(9,0.006711133);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(10,0.003421007);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(11,0.003282903);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(12,0.002649171);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(13,0.001753361);
   VbbHcc_algo_Z_pt_stack_1->SetBinError(14,0.001848645);
   VbbHcc_algo_Z_pt_stack_1->SetEntries(2209);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_algo_Z_pt_stack_2 = new TH1D("VbbHcc_algo_Z_pt_stack_2","",40,0,2000);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(1,0.03155205);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(2,0.208909);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(3,0.4048125);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(4,0.2227609);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(5,0.1101552);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(6,0.04737492);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(7,0.01771163);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(8,0.01092708);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(9,0.00228657);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(10,0.000391246);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(11,0.000262908);
   VbbHcc_algo_Z_pt_stack_2->SetBinContent(12,0.0005044512);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(1,0.002765341);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(2,0.007118018);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(3,0.009918127);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(4,0.007317233);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(5,0.005195263);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(6,0.003345079);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(7,0.002064443);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(8,0.001631016);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(9,0.0007016942);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(10,0.0002808042);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(11,0.000262908);
   VbbHcc_algo_Z_pt_stack_2->SetBinError(12,0.0003569464);
   VbbHcc_algo_Z_pt_stack_2->SetEntries(4555);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_algo_17->Modified();
   Z_pt_algo_17->cd();
   Z_pt_algo_17->SetSelected(Z_pt_algo_17);
}
