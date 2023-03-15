#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_16_logY()
{
//=========Macro generated from canvas: Z_pt_tags_16/Z_pt_tags_16
//=========  (Thu Mar  9 12:19:49 2023) by ROOT version 6.26/06
   TCanvas *Z_pt_tags_16 = new TCanvas("Z_pt_tags_16", "Z_pt_tags_16",0,0,600,600);
   Z_pt_tags_16->SetHighLightColor(2);
   Z_pt_tags_16->Range(-436.7058,-0.158906,2343.266,1.165311);
   Z_pt_tags_16->SetFillColor(0);
   Z_pt_tags_16->SetFillStyle(4000);
   Z_pt_tags_16->SetBorderMode(0);
   Z_pt_tags_16->SetBorderSize(2);
   Z_pt_tags_16->SetLogy();
   Z_pt_tags_16->SetLeftMargin(0.15709);
   Z_pt_tags_16->SetRightMargin(0.1234783);
   Z_pt_tags_16->SetBottomMargin(0.12);
   Z_pt_tags_16->SetFrameFillStyle(1000);
   Z_pt_tags_16->SetFrameBorderMode(0);
   Z_pt_tags_16->SetFrameFillStyle(1000);
   Z_pt_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(1e+10);
   
   TH1F *st_stack_9 = new TH1F("st_stack_9","",40,0,2000);
   st_stack_9->SetMinimum(-2.270274e+09);
   st_stack_9->SetMaximum(-0.1801601);
   st_stack_9->SetDirectory(0);
   st_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_9->SetLineColor(ci);
   st_stack_9->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_9->GetXaxis()->SetRange(7,30);
   st_stack_9->GetXaxis()->SetLabelFont(42);
   st_stack_9->GetXaxis()->SetTitleOffset(1);
   st_stack_9->GetXaxis()->SetTitleFont(42);
   st_stack_9->GetYaxis()->SetTitle("Event/50.0");
   st_stack_9->GetYaxis()->SetLabelFont(42);
   st_stack_9->GetYaxis()->SetTitleSize(0.037);
   st_stack_9->GetYaxis()->SetTitleFont(42);
   st_stack_9->GetZaxis()->SetLabelFont(42);
   st_stack_9->GetZaxis()->SetTitleOffset(1);
   st_stack_9->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_9);
   
   
   TH1D *VbbHcc_tags_Z_pt_stack_1 = new TH1D("VbbHcc_tags_Z_pt_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(1,0.2649001);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(2,0.5105229);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(3,0.6775876);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(4,0.5012291);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(5,0.3041787);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(6,0.189765);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(7,0.1121499);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(8,0.06878897);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(9,0.02342903);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(10,0.01040063);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(11,0.01880437);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(12,0.005762234);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(13,0.004114639);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(1,0.0238894);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(2,0.03256378);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(3,0.03773172);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(4,0.03233858);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(5,0.02490568);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(6,0.02004629);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(7,0.01515027);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(8,0.01201761);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(9,0.006800516);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(10,0.004659583);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(11,0.006290328);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(12,0.003294266);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(13,0.002911407);
   VbbHcc_tags_Z_pt_stack_1->SetEntries(1354);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_2 = new TH1D("VbbHcc_tags_Z_pt_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(1,0.0743948);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(2,0.1740151);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(3,0.3061162);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(4,0.2470199);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(5,0.1577494);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(6,0.09897383);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(7,0.04290627);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(8,0.02333337);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(9,0.005688964);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(10,0.002688977);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(11,0.0008581763);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(12,0.001293712);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(13,0.0001002657);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(14,0.0002974496);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(15,0.0005329909);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(16,0.0002182851);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(17,0.0002615052);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(19,0.000458368);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(21,0.0002724528);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(23,0.0002712116);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(1,0.004470839);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(2,0.006837731);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(3,0.009077101);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(4,0.008131712);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(5,0.006497516);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(6,0.005144436);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(7,0.003391315);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(8,0.002467456);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(9,0.001226698);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(10,0.0008510005);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(11,0.0004959246);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(12,0.0005798081);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(13,0.0001002657);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(14,0.0002974496);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(15,0.0003768826);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(16,0.0002182851);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(17,0.0002615052);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(19,0.0003263819);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(21,0.0002724528);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(23,0.0002712116);
   VbbHcc_tags_Z_pt_stack_2->SetEntries(4322);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_1","ZHcc","F");

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
   Z_pt_tags_16->Modified();
   Z_pt_tags_16->cd();
   Z_pt_tags_16->SetSelected(Z_pt_tags_16);
}
