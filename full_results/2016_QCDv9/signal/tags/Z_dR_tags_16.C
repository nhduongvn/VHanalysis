#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tags_16()
{
//=========Macro generated from canvas: Z_dR_tags_16/Z_dR_tags_16
//=========  (Tue Feb 14 15:57:08 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_tags_16 = new TCanvas("Z_dR_tags_16", "Z_dR_tags_16",0,0,600,600);
   Z_dR_tags_16->SetHighLightColor(2);
   Z_dR_tags_16->Range(-1.310117,-0.3288627,7.029799,2.41166);
   Z_dR_tags_16->SetFillColor(0);
   Z_dR_tags_16->SetFillStyle(4000);
   Z_dR_tags_16->SetBorderMode(0);
   Z_dR_tags_16->SetBorderSize(2);
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
   st->SetMaximum(2.137607);
   
   TH1F *st_stack_17 = new TH1F("st_stack_17","",30,0,6);
   st_stack_17->SetMinimum(0);
   st_stack_17->SetMaximum(2.137607);
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
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(3,0.4182393);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(4,0.8569765);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(5,0.9716072);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(6,0.981589);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(7,0.9566502);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(8,0.9329332);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(9,0.7727456);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(10,0.6841974);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(11,0.6138636);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(12,0.5702893);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(13,0.5899121);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(14,0.6280059);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(15,0.6096316);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(16,0.665365);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(17,0.2472948);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(18,0.09692527);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(19,0.0553781);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(20,0.04371769);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(21,0.01864835);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(22,0.01198918);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(23,0.002848767);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(25,0.002468749);
   VbbHcc_tags_Z_dR_stack_1->SetBinContent(27,0.001334684);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(3,0.03515847);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(4,0.05043233);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(5,0.05396013);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(6,0.05413665);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(7,0.05363239);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(8,0.05245474);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(9,0.04881246);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(10,0.0451877);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(11,0.04270056);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(12,0.04188211);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(13,0.0416686);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(14,0.04323763);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(15,0.04278562);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(16,0.04489086);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(17,0.02713182);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(18,0.01742878);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(19,0.01275146);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(20,0.01131381);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(21,0.007104469);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(22,0.006000661);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(23,0.002848767);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(25,0.002468749);
   VbbHcc_tags_Z_dR_stack_1->SetBinError(27,0.001334684);
   VbbHcc_tags_Z_dR_stack_1->SetEntries(3765);

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
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(2,0.0003747978);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(3,0.1651632);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(4,0.3685371);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(5,0.4415124);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(6,0.4434825);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(7,0.3563143);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(8,0.2333092);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(9,0.1777942);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(10,0.1490607);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(11,0.1336332);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(12,0.1252775);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(13,0.1398278);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(14,0.1456814);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(15,0.1633846);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(16,0.1545134);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(17,0.07378529);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(18,0.03217341);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(19,0.01817403);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(20,0.01370298);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(21,0.008791976);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(22,0.005983083);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(23,0.0007674639);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(24,0.001814911);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(25,0.001114495);
   VbbHcc_tags_Z_dR_stack_2->SetBinContent(28,0.0010673);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(2,0.0003747978);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(3,0.007914257);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(4,0.011843);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(5,0.01301537);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(6,0.01302919);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(7,0.01170101);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(8,0.009481278);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(9,0.008253902);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(10,0.007522942);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(11,0.007131331);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(12,0.006905592);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(13,0.007302852);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(14,0.00745782);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(15,0.00791834);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(16,0.007698945);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(17,0.005295267);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(18,0.003486146);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(19,0.002605735);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(20,0.002268512);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(21,0.001788208);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(22,0.001477296);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(23,0.0005427043);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(24,0.0008121453);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(25,0.0006436778);
   VbbHcc_tags_Z_dR_stack_2->SetBinError(28,0.0006173723);
   VbbHcc_tags_Z_dR_stack_2->SetEntries(8944);

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
